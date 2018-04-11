// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

// FBCamera wrapper
class FCameraStreamObject : public FModelStreamObject
{
private:
	const TArray<FString> CameraStreamOptions = { TEXT("Root Only"), TEXT("Camera") };

	enum FCameraStreamMode
	{
		RootOnly,
		Camera
	};

public:
	FCameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);
	virtual const FString GetStreamOptions() const override;
	virtual void Refresh() override;
	virtual void UpdateSubjectFrame() override;
};