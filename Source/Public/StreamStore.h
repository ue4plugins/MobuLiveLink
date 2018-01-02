#pragma once

#include "LiveLinkProvider.h"
#include "LiveLinkRefSkeleton.h"

#pragma warning(push)
#pragma warning(disable:4263 4264)
#include <fbsdk/fbsdk.h>
#pragma warning(pop)

class StreamObject
{
public:
	const FBModel* RootModel;
	const TSharedPtr<ILiveLinkProvider> Provider; 
	virtual void GetStreamData() = 0;
	virtual const char* GetStreamOptions() = 0;

protected:
	StreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) : RootModel(ModelPointer), Provider(StreamProvider) {};

	bool operator==(const StreamObject &other) const {
		return (this->RootModel == other.RootModel);
	}
};

class CameraStreamObject : public StreamObject
{
public:

	CameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) : StreamObject(ModelPointer, StreamProvider)
	{
		FName SubjectName(RootModel->LongName);
		TArray<FName> BoneNames;
		BoneNames.Emplace(FName("Bone01"));
		TArray<int32> BoneParents;
		BoneParents.Emplace(0);
		Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
	};

	void GetStreamData()
	{
		FName SubjectName(RootModel->LongName);
		TArray<FTransform> BoneTransforms;
		FTransform TestTransform;

		FBCamera* CameraModel = (FBCamera*)RootModel;
		FBVector3d translation;
		CameraModel->GetVector(translation, kModelTranslation, true, 0);
		TestTransform.SetTranslation(FVector(translation.mValue[0], translation.mValue[1], translation.mValue[2]));

		BoneTransforms.Emplace(TestTransform);
		TArray<FLiveLinkCurveElement> CurveData;
		FBTime LocalTime = FBSystem().LocalTime;
		Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
	};

	const char* GetStreamOptions()
	{
		return "Camera~Transform";
	};
};