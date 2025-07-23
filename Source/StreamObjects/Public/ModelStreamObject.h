// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IStreamObject.h"

struct FLiveLinkSkeletonStaticData;
struct FLiveLinkAnimationFrameData;
struct FLiveLinkTransformStaticData;
struct FLiveLinkTransformFrameData;
struct FLiveLinkLocatorStaticData;
struct FLiveLinkLocatorFrameData;

// Generic object that supports FBModels
// Either used for simple objects where no more specific class exists (Nulls, etc.)
// or used as a base class for StreamObjects who's Root object derives from FBModel
class FModelStreamObject : public IStreamObject
{
private:
	const TArray<FString> ModelStreamOptions = { TEXT("Root Only"), TEXT("Locators"), TEXT("Full Hierarchy") };

	enum FModelStreamMode
	{
		RootOnly,
		Locators,
		FullHierarchy,
	};

public:
	// Construct from a FBModel*
	FModelStreamObject(const FBModel* ModelPointer);

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

	virtual void Refresh(const TSharedPtr<ILiveLinkProvider> Provider) override;
	virtual void UpdateSubjectFrame(const TSharedPtr<ILiveLinkProvider> Provider, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime) override;

public:
	static void UpdateBaseStaticData(const FBModel* Model, bool bSendAnimatable, FLiveLinkBaseStaticData& InOutBaseFrameData);
	static void UpdateBaseFrameData(const FBModel* Model, bool bSendAnimatable, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime, FLiveLinkBaseFrameData& InOutBaseFrameData);
	void UpdateSubjectSkeletalStaticData(FLiveLinkSkeletonStaticData& InOutTransformFrame);
	void UpdateSubjectSkeletalFrameData(FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime, FLiveLinkAnimationFrameData& InOutTransformFrame);
	static void UpdateSubjectTransformStaticData(const FBModel* Model, bool bSendAnimatable, FLiveLinkTransformStaticData& InOutTransformFrame);
	static void UpdateSubjectTransformFrameData(const FBModel* Model, bool bSendAnimatable, FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime, FLiveLinkTransformFrameData& InOutTransformFrame);

	void UpdateSubjectLocatorStaticData(FLiveLinkLocatorStaticData& InOutLocatorFrame);
	void UpdateSubjectLocatorFrameData(FLiveLinkWorldTime WorldTime, FQualifiedFrameTime QualifiedFrameTime, FLiveLinkLocatorFrameData& InOutLocatorFrame);

protected:
	// Stream Variables
	const FBModel* const RootModel;

	FName SubjectName;
	TArray<int32> Parents;
	TArray<const FBModel*> Models;
	bool bIsActive;
	bool bSendAnimatable;
	int StreamingMode;

	// Get the names of the selected hierarchy and each object's parent ID
	void GetHierarchy(TArray<FName>& ObjectNames, TArray<int32>& OutParents, TArray<const FBModel*>& OutModels);
};
