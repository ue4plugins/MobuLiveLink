// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

//--- Include all Stream Objects here

#include "ModelStreamObject.h"
#include "CameraStreamObject.h"
#include "LightStreamObject.h"
#include "SkeletonHierarchyStreamObject.h"
#include "EditorActiveCameraStreamObject.h"

// Static Class providing easy creation of Stream Objects
class StreamObjectManagement
{
public:
	static TSharedPtr<IStreamObject> FBModelToStreamObject(FBModel* SourceModel);

	static TSharedPtr<IStreamObject> StoreCamera(const FBModel* CameraModel);
	static TSharedPtr<IStreamObject> StoreLight(const FBModel* LightModel);
	static TSharedPtr<IStreamObject> StoreGeneric(const FBModel* Model);
	static TSharedPtr<IStreamObject> StoreSkeleton(const FBModel* SkeletonModel);
};