#pragma once

#include "ModelStreamObject.h"

// FBModelSkeleton and FBModelRoot wrapper
class SkeletonHierarchyStreamObject : public ModelStreamObject
{
public:
	SkeletonHierarchyStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	// Override Refresh to only add Skeletal Children to the stream Hierarchy
	void Refresh() override;
	
	// Use ModelStreamObject's UpdateSubjectFrame
};