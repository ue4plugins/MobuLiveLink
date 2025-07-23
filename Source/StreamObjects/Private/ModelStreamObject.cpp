// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModelStreamObject.h"
#include "MobuLiveLinkUtilities.h"
#include <typeinfo>

#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkLocatorRole.h"
#include "Roles/LiveLinkLocatorTypes.h"
#include "Roles/LiveLinkTransformRole.h"
#include "Roles/LiveLinkTransformTypes.h"
#include "UObject/ObjectPtr.h"

// Creation / Destruction
FModelStreamObject::FModelStreamObject(const FBModel* ModelPointer)
	: RootModel(ModelPointer)
	, bIsActive(true)
	, bSendAnimatable(false)
	, StreamingMode(FModelStreamMode::RootOnly)
{
	check(ModelPointer);

	FString ModelLongName(ANSI_TO_TCHAR(RootModel->LongName));
	FString RightString;
	ModelLongName.Split(TEXT(":"), &ModelLongName, &RightString);
	SubjectName = FName(*ModelLongName);
};

FModelStreamObject::~FModelStreamObject()
{
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
	if (NewSubjectName != SubjectName)
	{
		SubjectName = NewSubjectName;
	}
};


int FModelStreamObject::GetStreamingMode() const
{
	return StreamingMode;
};

void FModelStreamObject::UpdateStreamingMode(int NewStreamingMode)
{
	if (StreamingMode != NewStreamingMode)
	{
		StreamingMode = NewStreamingMode;
	}
};

bool FModelStreamObject::GetActiveStatus() const
{
	return bIsActive;
};

void FModelStreamObject::UpdateActiveStatus(bool bIsNowActive)
{
	bIsActive = bIsNowActive;
};

bool FModelStreamObject::GetSendAnimatableStatus() const
{
	return bSendAnimatable;
};

void FModelStreamObject::UpdateSendAnimatableStatus(bool bNewSendAnimatable)
{
	if (bSendAnimatable != bNewSendAnimatable)
	{
		bSendAnimatable = bNewSendAnimatable;
	}
};

const FBModel* FModelStreamObject::GetModelPointer() const
{
	return RootModel;
};

const FString FModelStreamObject::GetRootName() const
{
	return FString(ANSI_TO_TCHAR(RootModel->LongName));
};

bool FModelStreamObject::IsValid() const
{
	// By Default an object is valid if the root model is in the scene
	return FBSystem().Scene->Components.Find((FBComponent*)RootModel) >= 0;
};

void FModelStreamObject::Refresh(const TSharedPtr<ILiveLinkProvider> Provider)
{
	if (GetStreamingMode() == FModelStreamMode::FullHierarchy)
	{
		FLiveLinkStaticDataStruct SkeletonData(FLiveLinkSkeletonStaticData::StaticStruct());
		UpdateSubjectSkeletalStaticData(*SkeletonData.Cast<FLiveLinkSkeletonStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkAnimationRole::StaticClass(), MoveTemp(SkeletonData));
	}
	else if(GetStreamingMode() == FModelStreamMode::Locators)
	{
		FLiveLinkStaticDataStruct LocatorData(FLiveLinkLocatorStaticData::StaticStruct());
		UpdateSubjectLocatorStaticData(*LocatorData.Cast<FLiveLinkLocatorStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkLocatorRole::StaticClass(), MoveTemp(LocatorData));
	}
	else
	{
		FLiveLinkStaticDataStruct TransformData(FLiveLinkTransformStaticData::StaticStruct());
		UpdateSubjectTransformStaticData(RootModel, bSendAnimatable, *TransformData.Cast<FLiveLinkTransformStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkTransformRole::StaticClass(), MoveTemp(TransformData));
	}
}

void FModelStreamObject::UpdateSubjectFrame(const TSharedPtr<ILiveLinkProvider> Provider, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime)
{
	if (!bIsActive)
	{
		return;
	}

	if (GetStreamingMode() == FModelStreamMode::FullHierarchy)
	{
		FLiveLinkFrameDataStruct TransformData = (FLiveLinkAnimationFrameData::StaticStruct());
		UpdateSubjectSkeletalFrameData(WorldTime, QualifiedFrameTime, *TransformData.Cast<FLiveLinkAnimationFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(TransformData));
	}
	else if(GetStreamingMode() == FModelStreamMode::Locators)
	{
		FLiveLinkFrameDataStruct LocatorData = (FLiveLinkLocatorFrameData::StaticStruct());
		UpdateSubjectLocatorFrameData(WorldTime, QualifiedFrameTime, *LocatorData.Cast<FLiveLinkLocatorFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(LocatorData));
	}
	else
	{
		FLiveLinkFrameDataStruct TransformData = (FLiveLinkTransformFrameData::StaticStruct());
		UpdateSubjectTransformFrameData(RootModel, bSendAnimatable, WorldTime, QualifiedFrameTime, *TransformData.Cast<FLiveLinkTransformFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(TransformData));
	}
}

void FModelStreamObject::UpdateBaseStaticData(const FBModel* Model, bool bSendAnimatable, FLiveLinkBaseStaticData& InOutBaseStaticData)
{
	if (bSendAnimatable)
	{
		InOutBaseStaticData.PropertyNames = MobuUtilities::GetAllAnimatableCurveNames(const_cast<FBModel*>(Model), FString(ANSI_TO_TCHAR(Model->Name)));
	}
}

void FModelStreamObject::UpdateSubjectTransformStaticData(const FBModel* Model, bool bSendAnimatable, FLiveLinkTransformStaticData& InOutTransformStatic)
{
	InOutTransformStatic.bIsScaleSupported = true;
	UpdateBaseStaticData(Model, bSendAnimatable, InOutTransformStatic);
}

void FModelStreamObject::UpdateSubjectSkeletalStaticData(FLiveLinkSkeletonStaticData& InOutAnimationStatic)
{
	UpdateBaseStaticData(RootModel, bSendAnimatable, InOutAnimationStatic);

	InOutAnimationStatic.BoneNames.Reset();
	Parents.Reset();
	Models.Reset();

	InOutAnimationStatic.BoneNames.Emplace(RootModel->Name);
	Parents.Emplace(-1);
	Models.Emplace(RootModel);

	GetHierarchy(InOutAnimationStatic.BoneNames, Parents, Models);
	
	InOutAnimationStatic.BoneParents = Parents;

	check(Models.Num() == InOutAnimationStatic.BoneNames.Num());
	if (bSendAnimatable)
	{
		for (int32 Index = 0; Index < Models.Num(); ++Index)
		{
			InOutAnimationStatic.PropertyNames.Append(MobuUtilities::GetAllAnimatableCurveNames(const_cast<FBModel*>(Models[Index]), InOutAnimationStatic.BoneNames[Index].ToString()));
		}
	}
}

void FModelStreamObject::UpdateBaseFrameData(const FBModel* Model, bool bSendAnimatable, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime, FLiveLinkBaseFrameData& InOutBaseFrameData)
{
	InOutBaseFrameData.WorldTime = WorldTime;
	InOutBaseFrameData.MetaData.SceneTime = QualifiedFrameTime;
	if (bSendAnimatable)
	{
		InOutBaseFrameData.PropertyValues = MobuUtilities::GetAllAnimatableCurveValues(const_cast<FBModel*>(Model));
	}
}

void FModelStreamObject::UpdateSubjectTransformFrameData(const FBModel* Model, bool bSendAnimatable, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime, FLiveLinkTransformFrameData& InOutTransformFrame)
{
	UpdateBaseFrameData(Model, bSendAnimatable, WorldTime, QualifiedFrameTime, InOutTransformFrame);
	InOutTransformFrame.Transform = MobuUtilities::UnrealTransformFromModel(const_cast<FBModel*>(Model));
}

void FModelStreamObject::UpdateSubjectSkeletalFrameData(FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime, FLiveLinkAnimationFrameData& InOutAnimationFrame)
{
	UpdateBaseFrameData(RootModel, bSendAnimatable, WorldTime, QualifiedFrameTime, InOutAnimationFrame);

	if (Parents.Num() != Models.Num())
	{
		return;
	}

	const int32 BoneCount = Parents.Num();
	InOutAnimationFrame.Transforms.SetNum(BoneCount);

	TArray<FTransform> ParentInverseTransforms;
	ParentInverseTransforms.SetNum(BoneCount);

	// loop through children here
	for (int BoneIndex = 0; BoneIndex < Models.Num(); ++BoneIndex)
	{
		InOutAnimationFrame.Transforms[BoneIndex] = MobuUtilities::UnrealTransformFromModel(const_cast<FBModel*>(Models[BoneIndex]));

		// We seem to be getting NaNs from somewhere for some reason, so let's trap them here to prevent the engine from hitting the Ensure()
		if (InOutAnimationFrame.Transforms[BoneIndex].ContainsNaN())
		{
			FBTrace("ERROR - Subject %s contains NaNs - %s\n", TCHAR_TO_UTF8(*SubjectName.ToString()), TCHAR_TO_UTF8(*InOutAnimationFrame.Transforms[BoneIndex].ToString()));
			ParentInverseTransforms[BoneIndex].SetIdentity();
			InOutAnimationFrame.Transforms[BoneIndex].SetIdentity();
		}
		else
		{
			ParentInverseTransforms[BoneIndex] = InOutAnimationFrame.Transforms[BoneIndex].Inverse();
			if (Parents[BoneIndex] != -1)
			{
				InOutAnimationFrame.Transforms[BoneIndex] = InOutAnimationFrame.Transforms[BoneIndex] * ParentInverseTransforms[Parents[BoneIndex]];
			}
		}

		if (bSendAnimatable)
		{
			// Stream all parameters of all bones as "<BoneName>:<ParameterName>"
			InOutAnimationFrame.PropertyValues.Append(MobuUtilities::GetAllAnimatableCurveValues(const_cast<FBModel*>(Models[BoneIndex])));
		}
	}
}

void FModelStreamObject::UpdateSubjectLocatorStaticData(FLiveLinkLocatorStaticData& InOutLocatorFrame)
{
	UpdateBaseStaticData(RootModel, bSendAnimatable, InOutLocatorFrame);

	InOutLocatorFrame.LocatorNames.Reset();
	Models.Reset();
	
	InOutLocatorFrame.LocatorNames.Emplace(RootModel->Name);
	Models.Emplace(RootModel);

	GetHierarchy(InOutLocatorFrame.LocatorNames, Parents, Models);
		
	check(Models.Num() == InOutLocatorFrame.LocatorNames.Num());
	if (bSendAnimatable)
	{
		for (int32 Index = 0; Index < Models.Num(); ++Index)
		{
			InOutLocatorFrame.PropertyNames.Append(MobuUtilities::GetAllAnimatableCurveNames(const_cast<FBModel*>(Models[Index]), InOutLocatorFrame.LocatorNames[Index].ToString()));
		}
		InOutLocatorFrame.bUnlabelledData = false;
	}
}

void FModelStreamObject::UpdateSubjectLocatorFrameData(FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime, FLiveLinkLocatorFrameData& InOutLocatorFrame)
{
	UpdateBaseFrameData(RootModel, bSendAnimatable, WorldTime, QualifiedFrameTime, InOutLocatorFrame);

	const int32 LocatorCount = Models.Num();
	InOutLocatorFrame.Locators.SetNum(LocatorCount);

	//loop through children
	for (int Index = 0; Index < Models.Num(); ++Index)
	{
		InOutLocatorFrame.Locators[Index] = MobuUtilities::UnrealTransformFromModel(const_cast<FBModel*>(Models[Index])).GetLocation();

		//If there are Nans handle it

		if(InOutLocatorFrame.Locators[Index].ContainsNaN())
		{
			InOutLocatorFrame.Locators[Index].ZeroVector;
		}
		
		if (bSendAnimatable)
		{
			InOutLocatorFrame.PropertyValues.Append(MobuUtilities::GetAllAnimatableCurveValues(const_cast<FBModel*>(Models[Index])));
		}
	}
}

void FModelStreamObject::GetHierarchy(TArray<FName>& ObjectNames, TArray<int32>& OutParents, TArray<const FBModel*>& OutModels)
{
	{
		TArray<TPair<int, FBModel*>> SearchList;
		TArray<TPair<int, FBModel*>> SearchListNext;

		SearchList.Emplace(0, (FBModel*)RootModel);

		while (SearchList.Num() > 0)
		{
			for (const TPair<int, FBModel*>& SearchPair : SearchList)
			{
				int ParentIndex = SearchPair.Key;
				FBModel* SearchModel = SearchPair.Value;
				int ChildCount = SearchModel->Children.GetCount();

				for (int ChildIndex = 0; ChildIndex < ChildCount; ++ChildIndex)
				{
					FBModel* ChildModel = SearchModel->Children[ChildIndex];

					ObjectNames.Emplace(ChildModel->Name);
					OutParents.Emplace(ParentIndex);
					OutModels.Emplace(ChildModel);
					SearchListNext.Emplace(OutModels.Num() - 1, ChildModel);
				}
			}
			SearchList = SearchListNext;
			SearchListNext.Reset();
		}
	}
}

