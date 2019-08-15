// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IStreamObject.h"

struct FLiveLinkSkeletonStaticData;
struct FLiveLinkAnimationFrameData;
struct FLiveLinkTransformStaticData;
struct FLiveLinkTransformFrameData;

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
		FullHierarchy,
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

	virtual bool GetSendAnimatableStatus() const override;
	virtual void UpdateSendAnimatableStatus(bool bNewSendAnimatable) override;

	virtual const FBModel* GetModelPointer() const override;

	virtual const FString GetRootName() const override;

	virtual bool IsValid() const override;

	virtual void Refresh() override;
	virtual void UpdateSubjectFrame() override;

public:
	static void UpdateBaseStaticData(const FBModel* Model, bool bSendAnimatable, FLiveLinkBaseStaticData& InOutBaseFrameData);
	static void UpdateBaseFrameData(const FBModel* Model, bool bSendAnimatable, FLiveLinkBaseFrameData& InOutBaseFrameData);
	void UpdateSubjectSkeletalStaticData(FLiveLinkSkeletonStaticData& InOutTransformFrame);
	void UpdateSubjectSkeletalFrameData(FLiveLinkAnimationFrameData& InOutTransformFrame);
	static void UpdateSubjectTransformStaticData(const FBModel* Model, bool bSendAnimatable, FLiveLinkTransformStaticData& InOutTransformFrame);
	static void UpdateSubjectTransformFrameData(const FBModel* Model, bool bSendAnimatable, FLiveLinkTransformFrameData& InOutTransformFrame);

protected:
	// Stream Variables
	const FBModel* const RootModel;
	const TSharedPtr<ILiveLinkProvider> Provider;

	FName SubjectName;
	TArray<int32> BoneParents;
	TArray<const FBModel*> BoneModels;
	bool bIsActive;
	bool bSendAnimatable;
	int StreamingMode;
};
