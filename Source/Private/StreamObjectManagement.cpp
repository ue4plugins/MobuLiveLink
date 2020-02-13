// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkStreamObjects.h"

TSharedPtr<IStreamObject> StreamObjectManagement::FBModelToStreamObject(FBModel* SourceModel)
{

	const int SourceType = SourceModel->GetTypeId();

	if (SourceType == FBCamera::TypeInfo)
	{
		return StoreCamera(SourceModel);
	}
	else if (SourceType == FBLight::TypeInfo)
	{
		return StoreLight(SourceModel);
	}
	else if (SourceType == FBModelSkeleton::TypeInfo || SourceType == FBModelRoot::TypeInfo)
	{
		return StoreSkeleton(SourceModel);
	}
	else
	{
		return StoreGeneric(SourceModel);
	}
};

TSharedPtr<IStreamObject> StreamObjectManagement::StoreCamera(const FBModel* Model)
{
	FBTrace("%s is a Camera!\n", (const char*)Model->LongName);

	TSharedPtr<IStreamObject> CameraStore = MakeShared<FCameraStreamObject>(Model);
	return CameraStore;
}

TSharedPtr<IStreamObject> StreamObjectManagement::StoreLight(const FBModel* Model)
{
	FBTrace("%s is a Light!\n", (const char*)Model->LongName);

	TSharedPtr<IStreamObject> LightStore = MakeShared<FLightStreamObject>(Model);
	return LightStore;
}

TSharedPtr<IStreamObject> StreamObjectManagement::StoreSkeleton(const FBModel* Model)
{
	FBTrace("%s is a Skeleton!\n", (const char*)Model->LongName);

	TSharedPtr<IStreamObject> SkeletonStore = MakeShared<FSkeletonHierarchyStreamObject>(Model);
	return SkeletonStore;
}

TSharedPtr<IStreamObject> StreamObjectManagement::StoreGeneric(const FBModel* Model)
{
	FBTrace("%s is an Unknown Type! - %s\n", (const char*)Model->LongName, ((FBModel*)Model)->ClassName());

	TSharedPtr<IStreamObject> GenericStore = MakeShared<FModelStreamObject>(Model);
	return GenericStore;
}