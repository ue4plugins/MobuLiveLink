// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

// FBModelSkeleton and FBModelRoot wrapper
class FSkeletonHierarchyStreamObject : public FModelStreamObject
{
private:
	const TArray<FString> SkeletonStreamOptions = { TEXT("Root Only"), TEXT("Full Hierarchy"), TEXT("Skeleton Hierarchy") };

	enum FSkeletonStreamMode
	{
		RootOnly,
		FullHierarchy,
		SkeletonHierarchy
	};
public:
	FSkeletonHierarchyStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	virtual const FString GetStreamOptions() const override;

	// Override Refresh to only add Skeletal Children to the stream Hierarchy
	virtual void Refresh() override;
	
	// Use ModelStreamObject's UpdateSubjectFrame
};