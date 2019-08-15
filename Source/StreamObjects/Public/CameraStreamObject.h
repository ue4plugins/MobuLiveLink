// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

struct FLiveLinkCameraStaticData;
struct FLiveLinkCameraFrameData;

// FBCamera wrapper
class FCameraStreamObject : public FModelStreamObject
{
private:
	const TArray<FString> CameraStreamOptions = { TEXT("Root Only"), TEXT("Camera"), TEXT("Full Hierarchy") };

	enum FCameraStreamMode
	{
		RootOnly,
		Camera,
		FullHierarchy
	};

public:
	FCameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);
	virtual const FString GetStreamOptions() const override;
	virtual void Refresh() override;
	virtual void UpdateSubjectFrame() override;

public:
	static void UpdateSubjectCameraStaticData(const FBCamera* CameraModel, FLiveLinkCameraStaticData& InOutCameraStatic);
	static void UpdateSubjectCameraFrameData(const FBCamera* CameraModel, FLiveLinkCameraFrameData& InOutCameraFrame);
};