// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MobuLiveLinkCommon.h"

class MobuUtilities
{
public:
	static FTransform MobuTransformToUnreal(FBMatrix& MobuTransfrom);
	static FTransform UnrealTransformFromModel(FBModel* MobuModel, bool bIsGlobal = true);
	static FTransform UnrealTransformFromCamera(FBCamera* CameraModel);
	static TArray<FLiveLinkCurveElement> GetAllAnimatableCurves(FBModel* MobuModel, const FString& Prefix = FString());
	static void AppendFilmbackSettings(FBCamera* CameraModel, TArray<FLiveLinkCurveElement>& CurveElements);

	static FFrameRate TimeModeToFrameRate(FBTimeMode TimeMode);
	static void GetSceneTimecode(FQualifiedFrameTime& SceneTimecode);
};