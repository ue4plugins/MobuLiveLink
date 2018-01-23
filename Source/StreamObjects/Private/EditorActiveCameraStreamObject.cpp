#include "EditorActiveCameraStreamObject.h"
#include "MobuLiveLinkUtilities.h"

EditorActiveCameraStreamObject::EditorActiveCameraStreamObject(const TSharedPtr<ILiveLinkProvider> StreamProvider)
	: Provider(StreamProvider), SubjectName("EditorActiveCamera"), BoneNames({FName("root")}), BoneParents({-1})
{
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
}

EditorActiveCameraStreamObject::~EditorActiveCameraStreamObject()
{
	Provider->ClearSubject(SubjectName);
}

const FString EditorActiveCameraStreamObject::GetStreamOptions() const
{
	// Stream options are not valid on Editor camera
	return FString();
};

FName EditorActiveCameraStreamObject::GetSubjectName() const
{
	return SubjectName;
};

void EditorActiveCameraStreamObject::UpdateSubjectName(FName NewSubjectName)
{
	// Subject name is not changeable on the Editor camera
};


int EditorActiveCameraStreamObject::GetStreamingMode() const
{
	return 0;
};

void EditorActiveCameraStreamObject::UpdateStreamingMode(int NewStreamingMode)
{
	// Streaming mode is not changeable on the Editor camera
};


bool EditorActiveCameraStreamObject::GetActiveStatus() const
{
	// Editor camera is always active
	return true;
};

void EditorActiveCameraStreamObject::UpdateActiveStatus(bool bIsNowActive)
{
	// Active Status is not changeable on the Editor camera
};

const kReference EditorActiveCameraStreamObject::GetReference() const
{
	return (kReference)nullptr;
};

const FString EditorActiveCameraStreamObject::GetRootName() const
{
	// Root Name is not valid on Editor camera
	return FString();
}


bool EditorActiveCameraStreamObject::IsValid() const
{
	// Editor camera is always valid
	return true;
}

void EditorActiveCameraStreamObject::Refresh()
{
	// Refresh is not a valid operation
}

void EditorActiveCameraStreamObject::UpdateSubjectFrame()
{
	FBSystem System;
	FBCamera* CameraModel = System.Scene->Renderer->CurrentCamera;

	TArray<FTransform> BoneTransforms;

	// Single Bone
	BoneTransforms.Emplace(UnrealTransformFromCamera(CameraModel));

	TArray<FLiveLinkCurveElement> CurveData = GetAllAnimatableCurves(CameraModel);

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
}