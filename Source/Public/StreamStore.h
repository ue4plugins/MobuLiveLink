#pragma once

#include "LiveLinkProvider.h"
#include "LiveLinkRefSkeleton.h"

#pragma warning(push)
#pragma warning(disable:4263 4264)
#include <fbsdk/fbsdk.h>
#pragma warning(pop)

// Abstract class. Inherit from this to support streaming.
// Wraps an FBModel* to get the required data for streaming.
class StreamObjectBase
{
public:
	virtual ~StreamObjectBase();

	// Optional Interface for modifying class parameters

	virtual FString GetStreamOptions();

	virtual FName GetSubjectName() const;

	virtual void UpdateSubjectName(FName NewSubjectName);

	virtual int GetStreamingMode() const;

	virtual void UpdateStreamingMode(int NewStreamingMode);

	virtual bool GetActiveStatus() const;

	virtual void UpdateActiveStatus(bool bIsNowActive);

	virtual const FBModel* GetRootModel();

	virtual bool IsValid();

	// Required Interface for object streaming

	virtual void UpdateFromModel() = 0;

	virtual void GetStreamData() = 0;

	// Utility Functions

	bool operator==(const StreamObjectBase &other) const;

	static FTransform MobuTransformToUnreal(FBMatrix& MobuTransfrom);
	static FTransform UnrealTransformFromModel(FBModel* MobuModel, bool bIsGlobal = true);
	static FTransform UnrealTransformFromCamera(FBCamera* CameraModel);
	static TArray<FLiveLinkCurveElement> GetAllAnimatableCurves(FBModel* MobuModel);

protected:

	const FBModel* RootModel;

	const TSharedPtr<ILiveLinkProvider> Provider;
	const TArray<FString> ConnectionOptions;

	FName SubjectName;
	TArray<FName> BoneNames;
	TArray<int32> BoneParents;
	int StreamingMode;
	bool bIsActive;

	
	StreamObjectBase(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider, std::initializer_list<FString> Options);

	// model-less constructor
	StreamObjectBase(const FName InSubjectName, const TSharedPtr<ILiveLinkProvider> StreamProvider);
};

// Generic object that only supports a single transform (Nulls, Cubes, etc.)
class GenericStreamObject : public StreamObjectBase
{
public:
	GenericStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void UpdateFromModel() override;
	void GetStreamData() override;
};

// FBCamera wrapper
class CameraStreamObject : public StreamObjectBase
{
public:
	CameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void UpdateFromModel() override;
	void GetStreamData() override;
};

// FBLight wrapper
// TODO: Will require some thought on how to handle different light types
class LightStreamObject : public StreamObjectBase
{
public:
	LightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void UpdateFromModel() override;
	void GetStreamData() override;
};

// FBModelSkeleton and FBModelRoot wrapper
class SkeletonHeirarchyStreamObject : public StreamObjectBase
{
	TArray<const FBModel*> BoneModels;

public:
	SkeletonHeirarchyStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	void UpdateFromModel() override;
	void GetStreamData() override;
};


// Streams the Active Editor Camera wrapper
class EditorActiveCameraStreamObject : public StreamObjectBase
{
public:
	EditorActiveCameraStreamObject(const TSharedPtr<ILiveLinkProvider> StreamProvider);

	bool IsValid() override;

	void UpdateFromModel() override;
	void GetStreamData() override;
};