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

	TArray<FLiveLinkCurveElement> CurveData;

	CurveData.SetNum(9);

	CurveData[0].CurveName = FName(TEXT("FieldOfViewX"));
	CurveData[0].CurveValue = CameraModel->FieldOfViewX;

	CurveData[1].CurveName = FName(TEXT("FieldOfViewY"));
	CurveData[1].CurveValue = CameraModel->FieldOfViewY;

	CurveData[2].CurveName = FName(TEXT("FieldOfView"));
	CurveData[2].CurveValue = CameraModel->FieldOfView;

	CurveData[3].CurveName = FName(TEXT("FocalLength"));
	CurveData[3].CurveValue = CameraModel->FocalLength;

	CurveData[4].CurveName = FName(TEXT("FocusSpecificDistance"));
	CurveData[4].CurveValue = CameraModel->FocusSpecificDistance;

	CurveData[5].CurveName = FName(TEXT("NearPlaneDistance"));
	CurveData[5].CurveValue = CameraModel->NearPlaneDistance;

	CurveData[6].CurveName = FName(TEXT("FarPlaneDistance"));
	CurveData[6].CurveValue = CameraModel->FarPlaneDistance;

	CurveData[7].CurveName = FName(TEXT("FilmSizeWidth"));
	CurveData[7].CurveValue = CameraModel->FilmSizeWidth;

	CurveData[8].CurveName = FName(TEXT("FilmSizeHeight"));
	CurveData[8].CurveValue = CameraModel->FilmSizeHeight;

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
}