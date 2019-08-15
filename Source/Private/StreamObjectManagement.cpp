// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkStreamObjects.h"

TSharedPtr<IStreamObject> StreamObjectManagement::FBModelToStreamObject(FBModel* SourceModel, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
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

TSharedPtr<IStreamObject> StreamObjectManagement::StoreCamera(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{
	FBTrace("%s is a Camera!\n", (const char*)Model->LongName);

	TSharedPtr<IStreamObject> CameraStore = MakeShared<FCameraStreamObject>(Model, LiveLinkProvider);
	return CameraStore;
}

TSharedPtr<IStreamObject> StreamObjectManagement::StoreLight(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{
	FBTrace("%s is a Light!\n", (const char*)Model->LongName);

	TSharedPtr<IStreamObject> LightStore = MakeShared<FLightStreamObject>(Model, LiveLinkProvider);
	return LightStore;
}

TSharedPtr<IStreamObject> StreamObjectManagement::StoreSkeleton(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{
	FBTrace("%s is a Skeleton!\n", (const char*)Model->LongName);

	TSharedPtr<IStreamObject> SkeletonStore = MakeShared<FSkeletonHierarchyStreamObject>(Model, LiveLinkProvider);
	return SkeletonStore;
}

TSharedPtr<IStreamObject> StreamObjectManagement::StoreGeneric(const FBModel* Model, TSharedPtr<ILiveLinkProvider> LiveLinkProvider)
{
	FBTrace("%s is an Unknown Type! - %s\n", (const char*)Model->LongName, ((FBModel*)Model)->ClassName());

	TSharedPtr<IStreamObject> GenericStore = MakeShared<FModelStreamObject>(Model, LiveLinkProvider);
	return GenericStore;
}