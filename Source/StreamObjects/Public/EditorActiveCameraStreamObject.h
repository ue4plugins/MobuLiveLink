// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IStreamObject.h"

// Wrapper for Streaming the Active Editor Camera 
class FEditorActiveCameraStreamObject : public IStreamObject
{
public:
	FEditorActiveCameraStreamObject();
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

	void Refresh(const TSharedPtr<ILiveLinkProvider> Provider) final;
	void UpdateSubjectFrame(const TSharedPtr<ILiveLinkProvider> Provider, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime) final;

private:

	const FName SubjectName;
	bool bIsActive;
	bool bSendAnimatable;
};