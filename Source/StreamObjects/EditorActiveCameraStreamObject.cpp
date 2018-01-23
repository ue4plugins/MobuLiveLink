#include "StreamStore.h"

EditorActiveCameraStreamObject::EditorActiveCameraStreamObject(const TSharedPtr<ILiveLinkProvider> StreamProvider)
	: StreamObjectBase(FName(TEXT("EditorActiveCamera")), StreamProvider)
{
	UpdateFromModel();
}

bool EditorActiveCameraStreamObject::IsValid()
{
	return true;
}

void EditorActiveCameraStreamObject::UpdateFromModel()
{
	BoneNames.SetNum(1);
	BoneNames[0] = FName("root");

	BoneParents.SetNum(1);
	BoneParents[0] = -1;

	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
}

void EditorActiveCameraStreamObject::GetStreamData()
{
	if (!bIsActive) return;

	FBSystem System;
	FBCamera* CameraModel = System.Scene->Renderer->CurrentCamera;

	TArray<FTransform> BoneTransforms;

	// Single Bone
	BoneTransforms.Emplace(UnrealTransformFromCamera(CameraModel));

	TArray<FLiveLinkCurveElement> CurveData = GetAllAnimatableCurves(CameraModel);

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
}