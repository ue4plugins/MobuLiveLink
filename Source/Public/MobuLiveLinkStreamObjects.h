// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

//--- Include all Stream Objects here

#include "ModelStreamObject.h"
#include "CameraStreamObject.h"
#include "LightStreamObject.h"
#include "SkeletonHierarchyStreamObject.h"
#include "EditorActiveCameraStreamObject.h"

// Static Class providing easy creation of Stream Objects
namespace StreamObjectManager
{
	static TSharedPtr<IStreamObject> FBModelToStreamObject(FBModel* SourceModel, TSharedPtr<ILiveLinkProvider> LiveLinkProvider);

	static TSharedPtr<IStreamObject> StoreCamera(const FBModel* CameraModel, TSharedPtr<ILiveLinkProvider> LiveLinkProvider);
	static TSharedPtr<IStreamObject> StoreLight(const FBModel* LightModel, TSharedPtr<ILiveLinkProvider> LiveLinkProvider);
	static TSharedPtr<IStreamObject> StoreGeneric(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider);
	static TSharedPtr<IStreamObject> StoreSkeleton(const FBModel* SkeletonModel, TSharedPtr<ILiveLinkProvider> LiveLinkProvider);
};