#pragma once

#include "ModelStreamObject.h"

// FBLight wrapper
// TODO: Will require some thought on how to handle different light types
class LightStreamObject : public ModelStreamObject
{
public:
	LightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void Refresh() override;
	void UpdateSubjectFrame() override;
};