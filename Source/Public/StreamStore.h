#pragma once

#include "LiveLinkProvider.h"
#include "LiveLinkRefSkeleton.h"

#pragma warning(push)
#pragma warning(disable:4263 4264)
#include <fbsdk/fbsdk.h>
#pragma warning(pop)

// TODO: This should be split into .h/.cpp pair

FTransform MobuTransformToUnreal(FBMatrix& MobuTransfrom)
{
	FBMatrix MobuTransformUnrealSpace;
	FBTVector TVector;
	FBSVector SVector;
	FBQuaternion Quat;
	for (int j = 0; j < 4; ++j)
	{
		if (j == 1)
		{
			MobuTransformUnrealSpace(j, 0) = -MobuTransfrom(j, 0);
			MobuTransformUnrealSpace(j, 1) = MobuTransfrom(j, 1);
			MobuTransformUnrealSpace(j, 2) = -MobuTransfrom(j, 2);
			MobuTransformUnrealSpace(j, 3) = -MobuTransfrom(j, 3);
		}
		else
		{
			MobuTransformUnrealSpace(j, 0) = MobuTransfrom(j, 0);
			MobuTransformUnrealSpace(j, 1) = -MobuTransfrom(j, 1);
			MobuTransformUnrealSpace(j, 2) = MobuTransfrom(j, 2);
			MobuTransformUnrealSpace(j, 3) = MobuTransfrom(j, 3);
		}
	}
	FBMatrixToTQS(TVector, Quat, SVector, MobuTransformUnrealSpace);
	FTransform UnrealTransform;
	UnrealTransform.SetRotation(FQuat(Quat[0], Quat[1], Quat[2], Quat[3]));
	UnrealTransform.SetTranslation(FVector(TVector[0], TVector[1], TVector[2]));
	UnrealTransform.SetScale3D(FVector(SVector[0], SVector[1], SVector[2]));

	return UnrealTransform;
};

FTransform UnrealTransformFromModel(FBModel* MobuModel)
{
	FBMatrix MobuTransform;
	FBMatrix MatOffset;
	
	MobuModel->GetMatrix(MobuTransform, kModelTransformation, true, 0);
	
	// Y-Up Correction
	FBRVector RotOffset(90, 0, 0);
	FBRotationToMatrix(MatOffset, RotOffset);
	FBMatrixMult(MobuTransform, MatOffset, MobuTransform);

	return MobuTransformToUnreal(MobuTransform);
};

class StreamObject
{
public:
	const FBModel* RootModel;
	const TSharedPtr<ILiveLinkProvider> Provider; 
	const TArray<FString> ConnectionOptions;

	virtual ~StreamObject() {};

	virtual FString GetStreamOptions()
	{
		return FString::Join(ConnectionOptions, _T("~"));
	};

	virtual void UpdateSubjectName(FName NewSubjectName) 
	{
		Provider->ClearSubject(SubjectName);

		SubjectName = NewSubjectName;
		Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
	};

	virtual void UpdateStreamingMode(int NewStreamingMode)
	{
		StreamingMode = NewStreamingMode;
	};

	virtual void UpdateActiveStatus(bool bIsNowActive)
	{
		bIsActive = bIsNowActive;
	};

	bool operator==(const StreamObject &other) const {
		return (this->RootModel == other.RootModel);
	};


	virtual void GetStreamData() = 0;

protected:

	FName SubjectName;
	TArray<FName> BoneNames;
	TArray<int32> BoneParents;
	int StreamingMode;
	bool bIsActive;

	StreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider, std::initializer_list<FString> Options) 
		: RootModel(ModelPointer), Provider(StreamProvider), ConnectionOptions(Options), SubjectName(ModelPointer->LongName), bIsActive(true), StreamingMode(0) {};
};



class CameraStreamObject : public StreamObject
{
public:

	CameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) : 
		StreamObject(ModelPointer, StreamProvider, { TEXT("As Camera"), TEXT("As Transform") })
	{
		BoneNames.Emplace(FName("Bone01"));
		BoneParents.Emplace(0);

		Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
	};

	void GetStreamData() override
	{
		if (!bIsActive) return;

		TArray<FTransform> BoneTransforms;

		FBCamera* CameraModel = (FBCamera*)RootModel;
		// Single Bone
		BoneTransforms.Emplace(UnrealTransformFromModel(CameraModel));

		TArray<FLiveLinkCurveElement> CurveData;
		// If Streaming as Camera then get the Camera Properties
		if (StreamingMode == 0)
		{
			// TODO: Get Camera Properties here
		}

		FBTime LocalTime = FBSystem().LocalTime;
		Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
	};
};

class LightStreamObject : public StreamObject
{
public:

	LightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
		StreamObject(ModelPointer, StreamProvider, { TEXT("As Light"), TEXT("As Transform") })
	{
		BoneNames.Emplace(FName("Bone01"));
		BoneParents.Emplace(0);

		Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
	};

	void GetStreamData() override
	{
		if (!bIsActive) return;

		TArray<FTransform> BoneTransforms;

		FBCamera* LightModel = (FBCamera*)RootModel;
		// Single Bone
		BoneTransforms.Emplace(UnrealTransformFromModel(LightModel));

		TArray<FLiveLinkCurveElement> CurveData;
		// If Streaming as Light then get the Light Properties
		if (StreamingMode == 0)
		{
			// TODO: Get Light Properties here
		}

		FBTime LocalTime = FBSystem().LocalTime;
		Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
	};
};

class GenericStreamObject : public StreamObject
{
public:

	GenericStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
		StreamObject(ModelPointer, StreamProvider, { TEXT("As Transform") })
	{
		BoneNames.Emplace(FName("Bone01"));
		BoneParents.Emplace(0);

		Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
	};

	void GetStreamData() override
	{
		if (!bIsActive) return;

		TArray<FTransform> BoneTransforms;

		// Single Bone
		BoneTransforms.Emplace(UnrealTransformFromModel((FBModel*)RootModel));

		// Generic Models have no special properties
		TArray<FLiveLinkCurveElement> CurveData;

		FBTime LocalTime = FBSystem().LocalTime;
		Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
	};
};