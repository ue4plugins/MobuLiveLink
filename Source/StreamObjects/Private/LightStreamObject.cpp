#include "LightStreamObject.h"
#include "MobuLiveLinkUtilities.h"

LightStreamObject::LightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	ModelStreamObject(ModelPointer, StreamProvider, { TEXT("Root Only"), TEXT("Full Hierarchy"), TEXT("Light") })
{
	StreamingMode = 2;

	BoneNames.Emplace(FName("Bone01"));
	BoneParents.Emplace(-1);

	Refresh();
};

void LightStreamObject::Refresh()
{
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
};

void LightStreamObject::UpdateSubjectFrame()
{
	if (!bIsActive) return;

	TArray<FTransform> BoneTransforms;

	FBCamera* LightModel = (FBCamera*)RootModel;
	// Single Bone
	BoneTransforms.Emplace(UnrealTransformFromModel(LightModel));

	TArray<FLiveLinkCurveElement> CurveData;
	// If Streaming as Light then get the Light Properties
	if (StreamingMode == 2)
	{
		// TODO: Add any additional Light logic here. For now stream everything we can
		CurveData = GetAllAnimatableCurves(LightModel);
	}

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble());
};