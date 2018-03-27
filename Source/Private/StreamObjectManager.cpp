// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkStreamObjects.h"

TSharedPtr<IStreamObject> StreamObjectManager::FBModelToStreamObject(FBModel* SourceModel, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{

	const int SourceType = SourceModel->GetTypeId();

	if (SourceType == FBCamera::TypeInfo)
	{
		return StoreCamera(SourceModel, LiveLinkProvider);
	}
	else if (SourceType == FBLight::TypeInfo)
	{
		return StoreLight(SourceModel, LiveLinkProvider);
	}
	else if (SourceType == FBModelSkeleton::TypeInfo || SourceType == FBModelRoot::TypeInfo)
	{
		return StoreSkeleton(SourceModel, LiveLinkProvider);
	}
	else
	{
		return StoreGeneric(SourceModel, LiveLinkProvider);
	}
};

TSharedPtr<IStreamObject> StreamObjectManager::StoreCamera(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{
	FBTrace("%s is a Camera!\n", Model->LongName);

	TSharedPtr<IStreamObject> CameraStore = MakeShared<CameraStreamObject>(Model, LiveLinkProvider);
	return CameraStore;
}

TSharedPtr<IStreamObject> StreamObjectManager::StoreLight(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{
	FBTrace("%s is a Light!\n", Model->LongName);

	TSharedPtr<IStreamObject> LightStore = MakeShared<LightStreamObject>(Model, LiveLinkProvider);
	return LightStore;
}

TSharedPtr<IStreamObject> StreamObjectManager::StoreSkeleton(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{
	FBTrace("%s is a Skeleton!\n", Model->LongName);

	TSharedPtr<IStreamObject> SkeletonStore = MakeShared<SkeletonHierarchyStreamObject>(Model, LiveLinkProvider);
	return SkeletonStore;
}

TSharedPtr<IStreamObject> StreamObjectManager::StoreGeneric(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{
	FBTrace("%s is an Unknown Type! - %s\n", Model->LongName, ((FBModel*)Model)->ClassName());

	TSharedPtr<IStreamObject> GenericStore = MakeShared<ModelStreamObject>(Model, LiveLinkProvider);
	return GenericStore;
}