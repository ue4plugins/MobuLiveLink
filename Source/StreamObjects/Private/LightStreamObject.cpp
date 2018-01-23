#include "LightStreamObject.h"
#include "MobuLiveLinkUtilities.h"

LightStreamObject::LightStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	ModelStreamObject(ModelPointer, StreamProvider, { TEXT("Light"), TEXT("Root Only") })
{
	Refresh();
};

void LightStreamObject::Refresh()
{
	BoneNames.SetNum(1);
	BoneNames[0] = FName("Bone01");
	BoneParents.SetNum(1);
	BoneParents[0] = -1;

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
	if (StreamingMode == 0)
	{
		// TODO: Add any additional Light logic here. For now stream everything we can
		CurveData = GetAllAnimatableCurves(LightModel);
	}

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
};