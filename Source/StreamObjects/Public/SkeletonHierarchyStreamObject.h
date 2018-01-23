#pragma once

#include "ModelStreamObject.h"

// FBModelSkeleton and FBModelRoot wrapper
class SkeletonHierarchyStreamObject : public ModelStreamObject
{
	TArray<const FBModel*> BoneModels;

public:
	SkeletonHierarchyStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void Refresh() override;
	void UpdateSubjectFrame() override;
};