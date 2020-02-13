// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkeletonHierarchyStreamObject.h"
#include "MobuLiveLinkUtilities.h"

#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"

FSkeletonHierarchyStreamObject::FSkeletonHierarchyStreamObject(const FBModel* ModelPointer) :
	FModelStreamObject(ModelPointer)
{
	StreamingMode = FSkeletonStreamMode::SkeletonHierarchy;
};

const FString FSkeletonHierarchyStreamObject::GetStreamOptions() const
{
	return FString::Join(SkeletonStreamOptions, _T("~"));
};

void FSkeletonHierarchyStreamObject::Refresh(const TSharedPtr<ILiveLinkProvider> Provider)
{
	BoneNames.Empty();
	BoneParents.Empty();
	BoneModels.Empty();

	if (StreamingMode == FSkeletonStreamMode::RootOnly)
	{
		FModelStreamObject::Refresh(Provider);
	}
	else
	{
		FLiveLinkStaticDataStruct AnimationData = (FLiveLinkSkeletonStaticData::StaticStruct());
		FModelStreamObject::UpdateBaseStaticData(RootModel, bSendAnimatable, *AnimationData.Cast<FLiveLinkBaseStaticData>());
		UpdateSubjectStaticData(*AnimationData.Cast<FLiveLinkSkeletonStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkAnimationRole::StaticClass(), MoveTemp(AnimationData));
	}
};

void FSkeletonHierarchyStreamObject::UpdateSubjectFrame(const TSharedPtr<ILiveLinkProvider> Provider, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime)
{
	if (!bIsActive)
	{
		return;
	}

	if (StreamingMode == FSkeletonStreamMode::RootOnly)
	{
		FModelStreamObject::UpdateSubjectFrame(Provider, WorldTime, QualifiedFrameTime);
	}
	else
	{
		FLiveLinkFrameDataStruct AnimationData(FLiveLinkAnimationFrameData::StaticStruct());
		FModelStreamObject::UpdateBaseFrameData(RootModel, bSendAnimatable, WorldTime, QualifiedFrameTime, *AnimationData.Cast<FLiveLinkAnimationFrameData>());
		UpdateSubjectFrameData(*AnimationData.Cast<FLiveLinkAnimationFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(AnimationData));
	}
};

void FSkeletonHierarchyStreamObject::UpdateSubjectStaticData(FLiveLinkSkeletonStaticData& InOutAnimationFrame)
{
	BoneNames.Emplace(RootModel->Name);
	BoneParents.Emplace(-1);
	BoneModels.Emplace(RootModel);

	TArray<TPair<int, FBModel*>> SearchList;
	TArray<TPair<int, FBModel*>> SearchListNext;

	SearchList.Emplace(0, (FBModel*)RootModel);

	while (SearchList.Num() > 0)
	{
		for (const TPair<int, FBModel*>& SearchPair : SearchList)
		{
			int ParentIdx = SearchPair.Key;
			FBModel* SearchModel = SearchPair.Value;
			int ChildCount = SearchModel->Children.GetCount();
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
		SearchListNext.Reset();
	}

	InOutAnimationFrame.BoneNames = BoneNames;
	InOutAnimationFrame.BoneParents = BoneParents;

	if (bSendAnimatable)
	{
		for (int BoneIndex = 0; BoneIndex < BoneModels.Num(); ++BoneIndex)
		{
			const FBModel* Model = BoneModels[BoneIndex];
			InOutAnimationFrame.PropertyNames.Append(MobuUtilities::GetAllAnimatableCurveNames(const_cast<FBModel*>(BoneModels[BoneIndex]), BoneNames[BoneIndex].ToString()));
		}
	}
}

void FSkeletonHierarchyStreamObject::UpdateSubjectFrameData(FLiveLinkAnimationFrameData& InOutAnimationFrame)
{
	int BoneCount = BoneNames.Num();
	InOutAnimationFrame.Transforms.SetNum(BoneCount);

	TArray<FTransform> ParentInverseTransforms;
	ParentInverseTransforms.SetNum(BoneCount);

	// loop through children here
	for (int BoneIndex = 0; BoneIndex < BoneModels.Num(); ++BoneIndex)
	{
		InOutAnimationFrame.Transforms[BoneIndex] = MobuUtilities::UnrealTransformFromModel(const_cast<FBModel*>(BoneModels[BoneIndex]));

		// We seem to be getting NaNs from somewhere for some reason, so let's trap them here to prevent the engine from hitting the Ensure()
		if (InOutAnimationFrame.Transforms[BoneIndex].ContainsNaN())
		{
			FBTrace("ERROR - Bone %s for Subject %s contains NaNs - %s\n", TCHAR_TO_UTF8(*BoneNames[BoneIndex].ToString()), TCHAR_TO_UTF8(*SubjectName.ToString()), TCHAR_TO_UTF8(*InOutAnimationFrame.Transforms[BoneIndex].ToString()));
			ParentInverseTransforms[BoneIndex].SetIdentity();
			InOutAnimationFrame.Transforms[BoneIndex].SetIdentity();
		}
		else
		{
			ParentInverseTransforms[BoneIndex] = InOutAnimationFrame.Transforms[BoneIndex].Inverse();
			if (BoneParents[BoneIndex] != -1)
			{
				InOutAnimationFrame.Transforms[BoneIndex] = InOutAnimationFrame.Transforms[BoneIndex] * ParentInverseTransforms[BoneParents[BoneIndex]];
			}
		}

		if (bSendAnimatable)
		{
			// Stream all parameters of all bones as "<BoneName>:<ParameterName>"
			InOutAnimationFrame.PropertyValues.Append(MobuUtilities::GetAllAnimatableCurveValues(const_cast<FBModel*>(BoneModels[BoneIndex])));
		}
	}
}
