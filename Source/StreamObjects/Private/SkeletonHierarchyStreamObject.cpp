// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SkeletonHierarchyStreamObject.h"
#include "MobuLiveLinkUtilities.h"

FSkeletonHierarchyStreamObject::FSkeletonHierarchyStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	FModelStreamObject(ModelPointer, StreamProvider, false)
{
	StreamingMode = FSkeletonStreamMode::SkeletonHierarchy;
	Refresh();
};

const FString FSkeletonHierarchyStreamObject::GetStreamOptions() const
{
	return FString::Join(SkeletonStreamOptions, _T("~"));
};

void FSkeletonHierarchyStreamObject::Refresh() 
{
	BaseMetadata.Add(FName("Stream Type"), SkeletonStreamOptions[StreamingMode]);

	BoneNames.Empty();
	BoneParents.Empty();
	BoneModels.Empty();

	BoneNames.Emplace(RootModel->Name);
	BoneParents.Emplace(-1);
	BoneModels.Emplace(RootModel);

	// If Streaming as Hierarchy
	if (StreamingMode != FSkeletonStreamMode::RootOnly)
	{
		TArray<TPair<int, FBModel*>> SearchList;
		TArray<TPair<int, FBModel*>> SearchListNext;

		SearchList.Emplace(0, (FBModel*)RootModel);

		while (SearchList.Num() > 0)
		{
			for (const TPair<int, FBModel*>& SearchPair : SearchList)
			{
				int ParentIdx = SearchPair.Key;
				FBModel* SearchModel = SearchPair.Value;
				int ChildCount = SearchModel->Children.GetCount(); // Yuck

				for (int ChildIdx = 0; ChildIdx < ChildCount; ++ChildIdx)
				{
					FBModel* ChildModel = SearchModel->Children[ChildIdx];

					if (StreamingMode == FSkeletonStreamMode::SkeletonHierarchy)
					{
						// Only want joints when streaming Skeletal Hierarchy
						int ChildModelType = ChildModel->GetTypeId();
						if (!(ChildModelType == FBModelSkeleton::TypeInfo || ChildModelType == FBModelRoot::TypeInfo))
						{
							continue;
						}
					}

					BoneNames.Emplace(ChildModel->Name);
					BoneParents.Emplace(ParentIdx);
					BoneModels.Emplace(ChildModel);

					SearchListNext.Emplace(BoneModels.Num() - 1, ChildModel);
				}
			}
			SearchList = SearchListNext;
			SearchListNext.Empty();
		}
	}
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
};