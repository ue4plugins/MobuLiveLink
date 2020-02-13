// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

struct FLiveLinkLightStaticData;
struct FLiveLinkLightFrameData;

// FBLight wrapper
class FLightStreamObject : public FModelStreamObject
{
private:
	const TArray<FString> LightStreamOptions = { TEXT("Root Only"), TEXT("Light"), TEXT("Full Hierarchy") };

	enum FLightStreamMode
	{
		RootOnly,
		Light,
		FullHierarchy,
	};

public:
	FLightStreamObject(const FBModel* ModelPointer);
	virtual const FString GetStreamOptions() const override;
	virtual void Refresh(const TSharedPtr<ILiveLinkProvider> Provider) override;
	virtual void UpdateSubjectFrame(const TSharedPtr<ILiveLinkProvider> Provider, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime) override;

protected:
	void UpdateSubjectLightStaticData(const FBLight* LightModel, FLiveLinkLightStaticData& InOutCameraFrame);
	void UpdateSubjectLightFrameData(const FBLight* LightModel, FLiveLinkLightFrameData& InOutCameraFrame);
};