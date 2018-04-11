// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

// FBLight wrapper
class FLightStreamObject : public FModelStreamObject
{
private:
	const TArray<FString> LightStreamOptions = { TEXT("Root Only"), TEXT("Light") };

	enum FLightStreamMode
	{
		RootOnly,
		Light
	};

public:
	FLightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);
	virtual const FString GetStreamOptions() const override;
	virtual void Refresh() override;
	virtual void UpdateSubjectFrame() override;
};