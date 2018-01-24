#pragma once

#include "MobuLiveLinkCommon.h"

static FTransform MobuTransformToUnreal(FBMatrix& MobuTransfrom);
static FTransform UnrealTransformFromModel(FBModel* MobuModel, bool bIsGlobal = true);
static FTransform UnrealTransformFromCamera(FBCamera* CameraModel);
static TArray<FLiveLinkCurveElement> GetAllAnimatableCurves(FBModel* MobuModel, const FString Prefix = FString());
