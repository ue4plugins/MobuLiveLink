// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

// FBLight wrapper
// TODO: Will require some thought on how to handle different light types
class FLightStreamObject : public FModelStreamObject
{
public:
	FLightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void Refresh() override;
	void UpdateSubjectFrame() override;
};