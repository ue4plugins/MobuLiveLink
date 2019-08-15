// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MobuLiveLinkCommon.h"

class MobuUtilities
{
public:
	static const float InchesToMillimeters;

	static FTransform MobuTransformToUnreal(FBMatrix MobuTransfrom);
	static FColor MobuColorToUnreal(FBColor Color);
	static FTransform UnrealTransformFromModel(FBModel* MobuModel, bool bIsGlobal = true);
	static TArray<FName> GetAllAnimatableCurveNames(FBModel* MobuModel, const FString& Prefix = FString());
	static TArray<float> GetAllAnimatableCurveValues(FBModel* MobuModel);

	static FFrameRate TimeModeToFrameRate(FBTimeMode TimeMode);
	static FQualifiedFrameTime GetSceneTimecode();
};