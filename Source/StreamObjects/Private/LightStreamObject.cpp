// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LightStreamObject.h"
#include "MobuLiveLinkUtilities.h"

#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkLightRole.h"
#include "Roles/LiveLinkLightTypes.h"
#include "Roles/LiveLinkTransformRole.h"
#include "Roles/LiveLinkTransformTypes.h"

FLightStreamObject::FLightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	FModelStreamObject(ModelPointer, StreamProvider, false)
{
	StreamingMode = FLightStreamMode::Light;

	Refresh();
};

const FString FLightStreamObject::GetStreamOptions() const
{
	return FString::Join(LightStreamOptions, _T("~"));
};

void FLightStreamObject::Refresh()
{
	if (GetStreamingMode() == FLightStreamMode::RootOnly)
	{
		FLiveLinkStaticDataStruct TransformData(FLiveLinkTransformStaticData::StaticStruct());
		UpdateSubjectTransformStaticData(RootModel, bSendAnimatable, *TransformData.Cast<FLiveLinkTransformStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkTransformRole::StaticClass(), MoveTemp(TransformData));
	}
	else if (GetStreamingMode() == FLightStreamMode::FullHierarchy)
	{
		FLiveLinkStaticDataStruct SkeletonData(FLiveLinkSkeletonStaticData::StaticStruct());
		UpdateSubjectSkeletalStaticData(*SkeletonData.Cast<FLiveLinkSkeletonStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkAnimationRole::StaticClass(), MoveTemp(SkeletonData));
	}
	else
	{
		FLiveLinkStaticDataStruct LightData(FLiveLinkLightStaticData::StaticStruct());
		FModelStreamObject::UpdateSubjectTransformStaticData(RootModel, bSendAnimatable, *LightData.Cast<FLiveLinkLightStaticData>());
		UpdateSubjectLightStaticData(static_cast<const FBLight*>(RootModel), *LightData.Cast<FLiveLinkLightStaticData>());
		Provider->UpdateSubjectStaticData(SubjectName, ULiveLinkLightRole::StaticClass(), MoveTemp(LightData));
	}
};

void FLightStreamObject::UpdateSubjectFrame()
{
	if (!bIsActive)
	{
		return;
	}

	if (GetStreamingMode() == FLightStreamMode::RootOnly)
	{
		FLiveLinkFrameDataStruct TransformData = (FLiveLinkTransformFrameData::StaticStruct());
		UpdateSubjectTransformFrameData(RootModel, bSendAnimatable, *TransformData.Cast<FLiveLinkTransformFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(TransformData));
	}
	else if (GetStreamingMode() == FLightStreamMode::FullHierarchy)
	{
		FLiveLinkFrameDataStruct TransformData = (FLiveLinkAnimationFrameData::StaticStruct());
		UpdateSubjectSkeletalFrameData(*TransformData.Cast<FLiveLinkAnimationFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(TransformData));
	}
	else
	{
		FLiveLinkFrameDataStruct LightData(FLiveLinkLightFrameData::StaticStruct());
		FModelStreamObject::UpdateSubjectTransformFrameData(const_cast<FBModel*>(RootModel), bSendAnimatable, *LightData.Cast<FLiveLinkTransformFrameData>());
		UpdateSubjectLightFrameData(static_cast<const FBLight*>(RootModel), *LightData.Cast<FLiveLinkLightFrameData>());
		Provider->UpdateSubjectFrameData(SubjectName, MoveTemp(LightData));
	}
}

void FLightStreamObject::UpdateSubjectLightStaticData(const FBLight* LightModel, FLiveLinkLightStaticData& InOutLightFrame)
{
	InOutLightFrame.bIsIntensitySupported = true;
	InOutLightFrame.bIsLightColorSupported = true;

	FBLightType LightType;
	LightModel->LightType.GetData(&LightType, sizeof(LightType), nullptr);
	InOutLightFrame.bIsInnerConeAngleSupported = (LightType == FBLightType::kFBLightTypeSpot);
	InOutLightFrame.bIsOuterConeAngleSupported = (LightType == FBLightType::kFBLightTypeSpot);
}

void FLightStreamObject::UpdateSubjectLightFrameData(const FBLight* LightModel, FLiveLinkLightFrameData& InOutLightFrame)
{
	double Intensity;
	LightModel->Intensity.GetData(&Intensity, sizeof(Intensity), nullptr);

	FBColor DiffuseColor;
	LightModel->DiffuseColor.GetData(&DiffuseColor, sizeof(DiffuseColor), nullptr);

	InOutLightFrame.Intensity = Intensity;
	InOutLightFrame.LightColor = MobuUtilities::MobuColorToUnreal(DiffuseColor);

	FBLightType LightType;
	LightModel->LightType.GetData(&LightType, sizeof(LightType), nullptr);
	if (LightType == FBLightType::kFBLightTypeSpot)
	{
		InOutLightFrame.InnerConeAngle = LightModel->InnerAngle;
		InOutLightFrame.OuterConeAngle = LightModel->OuterAngle;
	}
}
