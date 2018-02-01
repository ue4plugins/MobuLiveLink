#include "CameraStreamObject.h"
#include "MobuLiveLinkUtilities.h"

CameraStreamObject::CameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	ModelStreamObject(ModelPointer, StreamProvider, { TEXT("Root Only"), TEXT("Full Hierarchy"), TEXT("Camera") })
{
	StreamingMode = 2;

	BoneNames.Emplace(FName("Bone01"));
	BoneParents.Emplace(-1);

	Refresh();
}

void CameraStreamObject::Refresh() 
{
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
}

void CameraStreamObject::UpdateSubjectFrame() 
{
	if (!bIsActive) return;

	TArray<FTransform> BoneTransforms;

	FBCamera* CameraModel = (FBCamera*)RootModel;
	// Single Bone
	BoneTransforms.Emplace(UnrealTransformFromCamera(CameraModel));

	TArray<FLiveLinkCurveElement> CurveData;

	// If Streaming as Camera then get the Camera Properties
	if (StreamingMode == 2)
	{
		CurveData = GetAllAnimatableCurves(CameraModel);

		AppendFilmbackSettings(CameraModel, CurveData);
	}

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
}