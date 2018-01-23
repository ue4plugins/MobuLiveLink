#pragma once

#include "ModelStreamObject.h"

// FBCamera wrapper
class CameraStreamObject : public ModelStreamObject
{
public:
	CameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void Refresh() override;
	void UpdateSubjectFrame() override;
};