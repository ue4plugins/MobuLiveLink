#pragma once

#include "IStreamObject.h"

// Generic object that supports FBModels
// Either used for simple objects where no more specific class exists (Nulls, etc.)
// or used as a base class for StreamObjects who's Root object derives from FBModel
class ModelStreamObject : public IStreamObject
{
public:
	// Construct from a FBModel*
	ModelStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	virtual ~ModelStreamObject();

	// IStreamObject Interface

	virtual const bool ShouldShowInUI() const override;

	virtual const FString GetStreamOptions() const override;

	virtual FName GetSubjectName() const override;
	virtual void UpdateSubjectName(FName NewSubjectName) override;

	virtual int GetStreamingMode() const override;
	virtual void UpdateStreamingMode(int NewStreamingMode) override;

	virtual bool GetActiveStatus() const override;
	virtual void UpdateActiveStatus(bool bIsNowActive) override;

	virtual const kReference GetReference() const override;

	virtual const FString GetRootName() const override;

	virtual bool IsValid() const override;

	virtual void Refresh() override;
	virtual void UpdateSubjectFrame() override;

protected:

	// Constructor for Child Classes
	ModelStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider, std::initializer_list<FString> Options);

	// Stream Variables

	const FBModel* RootModel;

	const TSharedPtr<ILiveLinkProvider> Provider;
	const TArray<FString> ConnectionOptions;

	FName SubjectName;
	TArray<FName> BoneNames;
	TArray<int32> BoneParents;
	int StreamingMode;
	bool bIsActive;
};