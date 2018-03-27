// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "LightStreamObject.h"
#include "MobuLiveLinkUtilities.h"

FLightStreamObject::FLightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	FModelStreamObject(ModelPointer, StreamProvider, { TEXT("Root Only"), TEXT("Full Hierarchy"), TEXT("Light") })
{
	StreamingMode = 2;

	BoneNames.Emplace(FName("Bone01"));
	BoneParents.Emplace(-1);

	Refresh();
};

void FLightStreamObject::Refresh()
{
	BaseMetadata.Add(FName("Stream Type"), ConnectionOptions[StreamingMode]);
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
};

void FLightStreamObject::UpdateSubjectFrame()
{
	if (!bIsActive) return;

	TArray<FTransform> BoneTransforms;

	FBCamera* LightModel = (FBCamera*)RootModel;
	// Single Bone
	BoneTransforms.Emplace(MobuUtilities::UnrealTransformFromModel(LightModel));

	TArray<FLiveLinkCurveElement> CurveData;
	// If Streaming as Light then get the Light Properties
	if (StreamingMode == 2)
	{
		// TODO: Add any additional Light logic here. For now stream everything we can
		CurveData = MobuUtilities::GetAllAnimatableCurves(LightModel);
	}

	FLiveLinkMetaData FrameMetadata;
	FrameMetadata.StringMetaData = BaseMetadata;
	MobuUtilities::GetSceneTimecode(FrameMetadata.SceneTime);

	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, FrameMetadata, FPlatformTime::Seconds());
};