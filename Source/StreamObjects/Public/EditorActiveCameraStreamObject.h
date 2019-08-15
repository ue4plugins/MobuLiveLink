// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IStreamObject.h"

// Wrapper for Streaming the Active Editor Camera 
class FEditorActiveCameraStreamObject : public IStreamObject
{
public:
	FEditorActiveCameraStreamObject(const TSharedPtr<ILiveLinkProvider> StreamProvider);
	virtual ~FEditorActiveCameraStreamObject();

	// IStreamObject Interface

	const bool ShouldShowInUI() const final;

	const FString GetStreamOptions() const final;

	FName GetSubjectName() const final;
	void UpdateSubjectName(FName NewSubjectName) final;

	int GetStreamingMode() const final;
	void UpdateStreamingMode(int NewStreamingMode) final;

	bool GetActiveStatus() const final;
	void UpdateActiveStatus(bool bIsNowActive) final;

	virtual bool GetSendAnimatableStatus() const final;
	virtual void UpdateSendAnimatableStatus(bool bNewSendAnimatable) final;

	const FBModel* GetModelPointer() const final;

	const FString GetRootName() const final;

	bool IsValid() const final;

	void Refresh() final;
	void UpdateSubjectFrame() final;

private:

	const TSharedPtr<ILiveLinkProvider> Provider;

	const FName SubjectName;
	bool bIsActive;
	bool bSendAnimatable;
};