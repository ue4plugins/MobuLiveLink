// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CameraStreamObject.h"
#include "MobuLiveLinkUtilities.h"

FCameraStreamObject::FCameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	FModelStreamObject(ModelPointer, StreamProvider, { TEXT("Root Only"), TEXT("Full Hierarchy"), TEXT("Camera") })
{
	StreamingMode = 2;

	BoneNames.Emplace(FName("Bone01"));
	BoneParents.Emplace(-1);

	Refresh();
}

void FCameraStreamObject::Refresh() 
{
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
}

void FCameraStreamObject::UpdateSubjectFrame() 
{
	if (!bIsActive) return;

	TArray<FTransform> BoneTransforms;

	FBCamera* CameraModel = (FBCamera*)RootModel;
	// Single Bone
	BoneTransforms.Emplace(MobuUtilities::UnrealTransformFromCamera(CameraModel));

	TArray<FLiveLinkCurveElement> CurveData;

	// If Streaming as Camera then get the Camera Properties
	if (StreamingMode == 2)
	{
		CurveData = MobuUtilities::GetAllAnimatableCurves(CameraModel);

		MobuUtilities::AppendFilmbackSettings(CameraModel, CurveData);
	}

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble());
}