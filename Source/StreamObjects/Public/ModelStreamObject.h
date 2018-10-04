// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IStreamObject.h"

// Generic object that supports FBModels
// Either used for simple objects where no more specific class exists (Nulls, etc.)
// or used as a base class for StreamObjects who's Root object derives from FBModel
class FModelStreamObject : public IStreamObject
{
private:
	const TArray<FString> ModelStreamOptions = { TEXT("Root Only"), TEXT("Full Hierarchy") };

	enum FModelStreamMode
	{
		RootOnly,
		FullHierarchy
	};
public:
	// Construct from a FBModel*
	FModelStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider, bool bShouldRefresh=true);

	virtual ~FModelStreamObject();

	// IStreamObject Interface

	virtual const bool ShouldShowInUI() const override;

	virtual const FString GetStreamOptions() const override;

	virtual FName GetSubjectName() const override;
	virtual void UpdateSubjectName(FName NewSubjectName) override;

	virtual int GetStreamingMode() const override;
	virtual void UpdateStreamingMode(int NewStreamingMode) override;

	virtual bool GetActiveStatus() const override;
	virtual void UpdateActiveStatus(bool bIsNowActive) override;

	virtual const FBModel* GetModelPointer() const override;

	virtual const FString GetRootName() const override;

	virtual bool IsValid() const override;

	virtual void Refresh() override;
	virtual void UpdateSubjectFrame() override;

protected:
	// Stream Variables

	const FBModel* RootModel;

	const TSharedPtr<ILiveLinkProvider> Provider;

	FName SubjectName;
	TArray<FName> BoneNames;
	TArray<int32> BoneParents;
	TArray<const FBModel*> BoneModels;
	int StreamingMode;
	bool bIsActive;

	TMap<FName, FString> BaseMetadata;

};