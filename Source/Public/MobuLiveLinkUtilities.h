// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MobuLiveLinkCommon.h"

enum class ETimecodeMode : int32
{
	TimecodeMode_Local		= 0,
	TimecodeMode_System		= 1,
	TimecodeMode_Reference	= 2
};

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
	static FQualifiedFrameTime GetSceneTimecode(ETimecodeMode TimecodeMode);
};