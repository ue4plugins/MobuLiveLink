// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EditorActiveCameraStreamObject.h"
#include "MobuLiveLinkUtilities.h"

FEditorActiveCameraStreamObject::FEditorActiveCameraStreamObject(const TSharedPtr<ILiveLinkProvider> StreamProvider)
	: Provider(StreamProvider), SubjectName("EditorActiveCamera"), BoneNames({FName("root")}), BoneParents({-1})
{
	BaseMetadata.Add(FName("Stream Type"), SubjectName.ToString());
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
}

FEditorActiveCameraStreamObject::~FEditorActiveCameraStreamObject()
{
	Provider->ClearSubject(SubjectName);
	FBTrace("Destroying Editor Camera\n");
}

const bool FEditorActiveCameraStreamObject::ShouldShowInUI() const
{
	return false;
}

const FString FEditorActiveCameraStreamObject::GetStreamOptions() const
{
	// Stream options are not valid on Editor camera
	return FString();
};

FName FEditorActiveCameraStreamObject::GetSubjectName() const
{
	return SubjectName;
};

void FEditorActiveCameraStreamObject::UpdateSubjectName(FName NewSubjectName)
{
	// Subject name is not changeable on the Editor camera
};


int FEditorActiveCameraStreamObject::GetStreamingMode() const
{
	return 0;
};

void FEditorActiveCameraStreamObject::UpdateStreamingMode(int NewStreamingMode)
{
	// Streaming mode is not changeable on the Editor camera
};


bool FEditorActiveCameraStreamObject::GetActiveStatus() const
{
	// Editor camera is always active
	return true;
};

void FEditorActiveCameraStreamObject::UpdateActiveStatus(bool bIsNowActive)
{
	// Active Status is not changeable on the Editor camera
};

const kReference FEditorActiveCameraStreamObject::GetReference() const
{
	return (kReference)nullptr;
};

const FString FEditorActiveCameraStreamObject::GetRootName() const
{
	// Root Name is not valid on Editor camera
	return FString();
}


bool FEditorActiveCameraStreamObject::IsValid() const
{
	// Editor camera is always valid
	return true;
}

void FEditorActiveCameraStreamObject::Refresh()
{
	// Refresh is not a valid operation
}

void FEditorActiveCameraStreamObject::UpdateSubjectFrame()
{
	FBSystem System;
	FBCamera* CameraModel = System.Scene->Renderer->CurrentCamera;

	TArray<FTransform> BoneTransforms;

	// Single Bone
	BoneTransforms.Emplace(MobuUtilities::UnrealTransformFromCamera(CameraModel));

	TArray<FLiveLinkCurveElement> CurveData = MobuUtilities::GetAllAnimatableCurves(CameraModel);

	MobuUtilities::AppendFilmbackSettings(CameraModel, CurveData);

	FLiveLinkMetaData FrameMetadata;
	FrameMetadata.StringMetaData = BaseMetadata;
	MobuUtilities::GetSceneTimecode(FrameMetadata.SceneTime);

	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, FrameMetadata, FPlatformTime::Seconds());
}