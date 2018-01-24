#include "ModelStreamObject.h"
#include "MobuLiveLinkUtilities.h"

ModelStreamObject::ModelStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	ModelStreamObject(ModelPointer, StreamProvider, { TEXT("Root Only") })
{
	Refresh();
};

//// Creation / Destruction

ModelStreamObject::ModelStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider, std::initializer_list<FString> Options)
	: RootModel(ModelPointer), Provider(StreamProvider), ConnectionOptions(Options), bIsActive(true), StreamingMode(0)
{
	FString ModelLongName(ANSI_TO_TCHAR(RootModel->LongName));
	FString RightString;
	ModelLongName.Split(TEXT(":"), &ModelLongName, &RightString);
	SubjectName = FName(*ModelLongName);
};

ModelStreamObject::~ModelStreamObject()
{
	Provider->ClearSubject(SubjectName);
};

// Stream Object Interface

const bool ModelStreamObject::ShouldShowInUI() const
{
	return true;
};

const FString ModelStreamObject::GetStreamOptions() const
{
	return FString::Join(ConnectionOptions, _T("~"));
};

FName ModelStreamObject::GetSubjectName() const
{
	return SubjectName;
};

void ModelStreamObject::UpdateSubjectName(FName NewSubjectName)
{
	Provider->ClearSubject(SubjectName);
	SubjectName = NewSubjectName;
	Refresh();
};


int ModelStreamObject::GetStreamingMode() const
{
	return StreamingMode;
};

void ModelStreamObject::UpdateStreamingMode(int NewStreamingMode)
{
	StreamingMode = NewStreamingMode;
	Refresh();
};


bool ModelStreamObject::GetActiveStatus() const
{
	return bIsActive;
};

void ModelStreamObject::UpdateActiveStatus(bool bIsNowActive)
{
	bIsActive = bIsNowActive;
	Refresh();
};

const kReference ModelStreamObject::GetReference() const
{
	return (kReference)RootModel;
};

const FString ModelStreamObject::GetRootName() const
{
	return FString(ANSI_TO_TCHAR(RootModel->LongName));
}

bool ModelStreamObject::IsValid() const
{
	// By Default an object is valid if the root model is in the scene
	return FBSystem().Scene->Components.Find((FBComponent*)RootModel) >= 0;
};

void ModelStreamObject::Refresh()
{
	BoneNames.SetNum(1);
	BoneNames[0] = FName("Bone01");
	BoneParents.SetNum(1);
	BoneParents[0] = -1;

	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
};

void ModelStreamObject::UpdateSubjectFrame()
{
	if (!bIsActive) return;

	TArray<FTransform> BoneTransforms;

	// Single Bone
	BoneTransforms.Emplace(UnrealTransformFromModel((FBModel*)RootModel));

	TArray<FLiveLinkCurveElement> CurveData = GetAllAnimatableCurves((FBModel*)RootModel);

	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble(), LocalTime.GetFrame());
};