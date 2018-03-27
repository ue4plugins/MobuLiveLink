// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

// FBCamera wrapper
class CameraStreamObject : public ModelStreamObject
{
public:
	CameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void Refresh() override;
	void UpdateSubjectFrame() override;
};