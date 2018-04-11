// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CameraStreamObject.h"
#include "MobuLiveLinkUtilities.h"

FCameraStreamObject::FCameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	FModelStreamObject(ModelPointer, StreamProvider, false)
{
	StreamingMode = FCameraStreamMode::Camera;

	BoneNames.Emplace(FName("Bone01"));
	BoneParents.Emplace(-1);

	Refresh();
}

const FString FCameraStreamObject::GetStreamOptions() const
{
	return FString::Join(CameraStreamOptions, _T("~"));
};

void FCameraStreamObject::Refresh() 
{
	BaseMetadata.Add(FName("Stream Type"), CameraStreamOptions[StreamingMode]);
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
}

void FCameraStreamObject::UpdateSubjectFrame() 
{
	if (!bIsActive)
	{
		return;
	}

	TArray<FTransform> BoneTransforms;

	FBCamera* CameraModel = (FBCamera*)RootModel;
	// Single Bone
	BoneTransforms.Emplace(MobuUtilities::UnrealTransformFromCamera(CameraModel));

	TArray<FLiveLinkCurveElement> CurveData;

	// If Streaming as Camera then get the Camera Properties
	if (StreamingMode == FCameraStreamMode::Camera)
	{
		CurveData = MobuUtilities::GetAllAnimatableCurves(CameraModel);

		MobuUtilities::AppendFilmbackSettings(CameraModel, CurveData);
	}

	FLiveLinkMetaData FrameMetadata;
	FrameMetadata.StringMetaData = BaseMetadata;
	MobuUtilities::GetSceneTimecode(FrameMetadata.SceneTime);

	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, FrameMetadata, FPlatformTime::Seconds());
}