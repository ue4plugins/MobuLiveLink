// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ModelStreamObject.h"
#include "MobuLiveLinkUtilities.h"
#include <typeinfo>

//// Creation / Destruction
FModelStreamObject::FModelStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider, bool bShouldRefresh)
	: RootModel(ModelPointer), Provider(StreamProvider), bIsActive(true), StreamingMode(FModelStreamMode::RootOnly)
{
	FString ModelLongName(ANSI_TO_TCHAR(RootModel->LongName));
	FString RightString;
	ModelLongName.Split(TEXT(":"), &ModelLongName, &RightString);
	SubjectName = FName(*ModelLongName);

	if (bShouldRefresh)
	{
		Refresh();
	}
};

FModelStreamObject::~FModelStreamObject()
{
	Provider->ClearSubject(SubjectName);
};

// Stream Object Interface

const bool FModelStreamObject::ShouldShowInUI() const
{
	return true;
};

const FString FModelStreamObject::GetStreamOptions() const
{
	return FString::Join(ModelStreamOptions, _T("~"));
};

FName FModelStreamObject::GetSubjectName() const
{
	return SubjectName;
};

void FModelStreamObject::UpdateSubjectName(FName NewSubjectName)
{
	Provider->ClearSubject(SubjectName);
	SubjectName = NewSubjectName;
	Refresh();
};


int FModelStreamObject::GetStreamingMode() const
{
	return StreamingMode;
};

void FModelStreamObject::UpdateStreamingMode(int NewStreamingMode)
{
	StreamingMode = NewStreamingMode;
	Refresh();
};


bool FModelStreamObject::GetActiveStatus() const
{
	return bIsActive;
};

void FModelStreamObject::UpdateActiveStatus(bool bIsNowActive)
{
	bIsActive = bIsNowActive;
	Refresh();
};

const FBModel* FModelStreamObject::GetModelPointer() const
{
	return RootModel;
};

const FString FModelStreamObject::GetRootName() const
{
	return FString(ANSI_TO_TCHAR(RootModel->LongName));
}

bool FModelStreamObject::IsValid() const
{
	// By Default an object is valid if the root model is in the scene
	return FBSystem().Scene->Components.Find((FBComponent*)RootModel) >= 0;
};

void FModelStreamObject::Refresh()
{
	BaseMetadata.Add(FName("Stream Type"), ModelStreamOptions[StreamingMode]);

	BoneNames.Empty();
	BoneParents.Empty();
	BoneModels.Empty();

	BoneNames.Emplace(RootModel->Name);
	BoneParents.Emplace(-1);
	BoneModels.Emplace(RootModel);

	// If Streaming as Hierarchy
	if (StreamingMode != FModelStreamMode::RootOnly)
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
				int ChildCount = SearchModel->Children.GetCount();

				for (int ChildIdx = 0; ChildIdx < ChildCount; ++ChildIdx)
				{
					FBModel* ChildModel = SearchModel->Children[ChildIdx];

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

void FModelStreamObject::UpdateSubjectFrame()
{
	if (!bIsActive)
	{
		return;
	}

	int BoneCount = BoneNames.Num();
	TArray<FTransform> BoneTransforms;
	BoneTransforms.SetNum(BoneCount);

	TArray<FTransform> ParentInverseTransforms;
	ParentInverseTransforms.SetNum(BoneCount);

	TArray<FLiveLinkCurveElement> CurveData;

	// loop through children here
	for (int BoneIndex = 0; BoneIndex < BoneModels.Num(); ++BoneIndex)
	{
		BoneTransforms[BoneIndex] = MobuUtilities::UnrealTransformFromModel((FBModel*)BoneModels[BoneIndex]);
		ParentInverseTransforms[BoneIndex] = BoneTransforms[BoneIndex].Inverse();
		if (BoneParents[BoneIndex] != -1)
		{
			BoneTransforms[BoneIndex] = BoneTransforms[BoneIndex] * ParentInverseTransforms[BoneParents[BoneIndex]];
		}

		// Stream all parameters of all bones as "<BoneName>:<ParameterName>"
		CurveData.Append(MobuUtilities::GetAllAnimatableCurves((FBModel*)BoneModels[BoneIndex], BoneNames[BoneIndex].ToString()));
	}

	FLiveLinkMetaData FrameMetadata;
	FrameMetadata.StringMetaData = BaseMetadata;
	MobuUtilities::GetSceneTimecode(FrameMetadata.SceneTime);

	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, FrameMetadata, FPlatformTime::Seconds());
};