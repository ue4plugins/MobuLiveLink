#include "StreamStore.h"

GenericStreamObject::GenericStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	StreamObjectBase(ModelPointer, StreamProvider, { TEXT("As Transform") })
{
	UpdateFromModel();
};

void GenericStreamObject::UpdateFromModel()
{
	BoneNames.Emplace(FName("Bone01"));
	BoneParents.Emplace(0);

	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
};

void GenericStreamObject::GetStreamData()
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