// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MobuLiveLinkCommon.h"

namespace MobuUtilities
{
	FTransform MobuTransformToUnreal(FBMatrix& MobuTransfrom);
	FTransform UnrealTransformFromModel(FBModel* MobuModel, bool bIsGlobal = true);
	FTransform UnrealTransformFromCamera(FBCamera* CameraModel);
	TArray<FLiveLinkCurveElement> GetAllAnimatableCurves(FBModel* MobuModel, const FString Prefix = FString());
	void AppendFilmbackSettings(FBCamera* CameraModel, TArray<FLiveLinkCurveElement>& CurveElements);

	FLiveLinkFrameRate TimeModeToFrameRate(FBTimeMode TimeMode);
	void GetSceneTimecode(FLiveLinkTimeCode& SceneTimecode);
}