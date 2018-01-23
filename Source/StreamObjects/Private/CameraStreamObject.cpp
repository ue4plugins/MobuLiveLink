#include "CameraStreamObject.h"
#include "MobuLiveLinkUtilities.h"

CameraStreamObject::CameraStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	ModelStreamObject(ModelPointer, StreamProvider, { TEXT("Camera"), TEXT("Root Only") })
{
	Refresh();
}

void CameraStreamObject::Refresh() 
{
	BoneNames.SetNum(1);
	BoneNames[0] = FName("Bone01");
	BoneParents.SetNum(1);
	BoneParents[0] = -1;

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
	if (StreamingMode == 0)
	{
		CurveData = GetAllAnimatableCurves(CameraModel);
	}

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
}