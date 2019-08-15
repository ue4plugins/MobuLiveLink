// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

struct FLiveLinkSkeletonStaticData;
struct FLiveLinkAnimationFrameData;

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
	virtual void UpdateSubjectFrame() override;

	void UpdateSubjectStaticData(FLiveLinkSkeletonStaticData& InOutAnimationFrame);
	void UpdateSubjectFrameData(FLiveLinkAnimationFrameData& InOutAnimationFrame);

private:
	TArray<FName> BoneNames;
	TArray<int32> BoneParents;
	TArray<const FBModel*> BoneModels;
};