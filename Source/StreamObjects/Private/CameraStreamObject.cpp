// Copyright Epic Games, Inc. All Rights Reserved.

#include "CameraStreamObject.h"
#include "MobuLiveLinkUtilities.h"

#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkCameraRole.h"
#include "Roles/LiveLinkCameraTypes.h"
#include "Roles/LiveLinkTransformRole.h"
#include "Roles/LiveLinkTransformTypes.h"

namespace
{
	void FixCameraRotation(FTransform& CameraTransform)
	{
		FMatrix InMatrix = CameraTransform.ToMatrixWithScale();

		FVector DestAxisX = InMatrix.GetScaledAxis(EAxis::X);
		FVector DestAxisY = InMatrix.GetScaledAxis(EAxis::Z);
		FVector DestAxisZ = InMatrix.GetScaledAxis(EAxis::Y) * -1.0f;

		FMatrix Result(InMatrix);
		Result.SetAxes(&DestAxisX, &DestAxisY, &DestAxisZ);

		CameraTransform.SetFromMatrix(Result);
	}
}

FCameraStreamObject::FCameraStreamObject(const FBModel* ModelPointer) :
	FModelStreamObject(ModelPointer)
{
	StreamingMode = FCameraStreamMode::Camera;
}

const FString FCameraStreamObject::GetStreamOptions() const
{
	return FString::Join(CameraStreamOptions, _T("~"));
};

void FCameraStreamObject::Refresh(const TSharedPtr<ILiveLinkProvider> Provider)
{
	if (GetStreamingMode() == FCameraStreamMode::RootOnly)
	{
		FLiveLinkStaticDataStruct TransformData(FLiveLinkTransformStaticData::StaticStruct());
		UpdateSubjectTransformStaticData(RootModel, bSendAnimatable, *TransformData.Cast<FLiveLinkTransformStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkTransformRole::StaticClass(), MoveTemp(TransformData));
	}
	else if (GetStreamingMode() == FCameraStreamMode::FullHierarchy)
	{
		FLiveLinkStaticDataStruct SkeletonData(FLiveLinkSkeletonStaticData::StaticStruct());
		UpdateSubjectSkeletalStaticData(*SkeletonData.Cast<FLiveLinkSkeletonStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkAnimationRole::StaticClass(), MoveTemp(SkeletonData));
	}
	else
	{
		FLiveLinkStaticDataStruct CameraData(FLiveLinkCameraStaticData::StaticStruct());
		FModelStreamObject::UpdateSubjectTransformStaticData(RootModel, bSendAnimatable, *CameraData.Cast<FLiveLinkCameraStaticData>());
		UpdateSubjectCameraStaticData(static_cast<const FBCamera*>(RootModel), *CameraData.Cast<FLiveLinkCameraStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkCameraRole::StaticClass(), MoveTemp(CameraData));
	}
}

void FCameraStreamObject::UpdateSubjectFrame(const TSharedPtr<ILiveLinkProvider> Provider, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime)
{
	if (!bIsActive)
	{
		return;
	}

	if (GetStreamingMode() == FCameraStreamMode::RootOnly)
	{
		FLiveLinkFrameDataStruct TransformData = (FLiveLinkTransformFrameData::StaticStruct());
		FLiveLinkTransformFrameData& CameraTransformData = *TransformData.Cast<FLiveLinkTransformFrameData>();
		UpdateSubjectTransformFrameData(RootModel, bSendAnimatable, WorldTime, QualifiedFrameTime, CameraTransformData);
		FixCameraRotation(CameraTransformData.Transform);
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(TransformData));
	}
	else if (GetStreamingMode() == FCameraStreamMode::FullHierarchy)
	{
		FLiveLinkFrameDataStruct TransformData = (FLiveLinkAnimationFrameData::StaticStruct());
		UpdateSubjectSkeletalFrameData(WorldTime, QualifiedFrameTime, *TransformData.Cast<FLiveLinkAnimationFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(TransformData));
	}
	else
	{
		FLiveLinkFrameDataStruct CameraData(FLiveLinkCameraFrameData::StaticStruct());
		FModelStreamObject::UpdateSubjectTransformFrameData(RootModel, bSendAnimatable, WorldTime, QualifiedFrameTime, *CameraData.Cast<FLiveLinkTransformFrameData>());
		UpdateSubjectCameraFrameData(static_cast<const FBCamera*>(RootModel), *CameraData.Cast<FLiveLinkCameraFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(CameraData));
	}
}

void FCameraStreamObject::UpdateSubjectCameraStaticData(const FBCamera* CameraModel, FLiveLinkCameraStaticData& InOutCameraStatic)
{
	InOutCameraStatic.bIsFieldOfViewSupported = true;
	InOutCameraStatic.bIsAspectRatioSupported = true;
	InOutCameraStatic.bIsProjectionModeSupported = true;
	InOutCameraStatic.bIsFocalLengthSupported = true;

	double FilmSizeHeight, FilmSizeWidth;
	CameraModel->FilmSizeHeight.GetData(&FilmSizeHeight, sizeof(FilmSizeHeight), nullptr);
	CameraModel->FilmSizeWidth.GetData(&FilmSizeWidth, sizeof(FilmSizeWidth), nullptr);
	InOutCameraStatic.FilmBackWidth = (float)(FilmSizeWidth * MobuUtilities::InchesToMillimeters);
	InOutCameraStatic.FilmBackHeight = (float)(FilmSizeHeight * MobuUtilities::InchesToMillimeters);

	FBCameraFocusDistanceSource FocusMethod;
	CameraModel->FocusDistanceSource.GetData(&FocusMethod, sizeof(FocusMethod), nullptr);
	InOutCameraStatic.bIsFocusDistanceSupported = (FocusMethod == FBCameraFocusDistanceSource::kFBFocusDistanceSpecificDistance);
}

void FCameraStreamObject::UpdateSubjectCameraFrameData(const FBCamera* CameraModel, FLiveLinkCameraFrameData& InOutCameraFrame)
{
	FixCameraRotation(InOutCameraFrame.Transform);

	double FieldOfView, FilmAspectRatio, FocalLength, FocusSpecificDistance;
	CameraModel->FieldOfView.GetData(&FieldOfView, sizeof(FieldOfView), nullptr);
	CameraModel->FilmAspectRatio.GetData(&FilmAspectRatio, sizeof(FilmAspectRatio), nullptr);
	CameraModel->FocalLength.GetData(&FocalLength, sizeof(FocalLength), nullptr);
	CameraModel->FocusSpecificDistance.GetData(&FocusSpecificDistance, sizeof(FocusSpecificDistance), nullptr);

	InOutCameraFrame.FieldOfView = FieldOfView;
	InOutCameraFrame.AspectRatio = FilmAspectRatio;
	InOutCameraFrame.FocalLength = FocalLength;
	InOutCameraFrame.FocusDistance = FocusSpecificDistance;

	FBCameraType CameraType;
	CameraModel->Type.GetData(&CameraType, sizeof(CameraType), nullptr);
	InOutCameraFrame.ProjectionMode = CameraType == FBCameraType::kFBCameraTypePerspective ? ELiveLinkCameraProjectionMode::Perspective : ELiveLinkCameraProjectionMode::Orthographic;
}
