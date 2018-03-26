#include "ModelStreamObject.h"
#include "MobuLiveLinkUtilities.h"

ModelStreamObject::ModelStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider) :
	ModelStreamObject(ModelPointer, StreamProvider, { TEXT("Root Only"), TEXT("Full Hierarchy") })
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
	BoneNames.Empty();
	BoneParents.Empty();
	BoneModels.Empty();

	BoneNames.Emplace(RootModel->Name);
	BoneParents.Emplace(-1);
	BoneModels.Emplace(RootModel);

	// If Streaming as Hierarchy
	if (StreamingMode > 0)
	{
		TArray<TPair<int, FBModel*>> SearchList;
		TArray<TPair<int, FBModel*>> SearchListNext;

		SearchList.Emplace(0, (FBModel*)RootModel);

		while (SearchList.Num() > 0)
		{
			for (const auto& SearchPair : SearchList)
			{
				int ParentIdx = SearchPair.Key;
				FBModel* SearchModel = SearchPair.Value;
				int ChildCount = SearchModel->Children.GetCount(); // Yuck

				for (int ChildIdx = 0; ChildIdx < ChildCount; ++ChildIdx)
				{
					FBModel* ChildModel = SearchModel->Children[ChildIdx];

					BoneNames.Emplace(ChildModel->Name);
					BoneParents.Emplace(ParentIdx);
					BoneModels.Emplace(ChildModel);

					SearchListNext.Emplace(BoneModels.Num() - 1, ChildModel);
				}
			}
			SearchList = SearchListNext;
			SearchListNext.Empty();
		}
	}
	Provider->UpdateSubject(SubjectName, BoneNames, BoneParents);
};

void ModelStreamObject::UpdateSubjectFrame()
{
	if (!bIsActive) return;

	int BoneCount = BoneNames.Num();
	TArray<FTransform> BoneTransforms;
	BoneTransforms.SetNum(BoneCount);

	TArray<FTransform> ParentInverseTransforms;
	ParentInverseTransforms.SetNum(BoneCount);

	TArray<FLiveLinkCurveElement> CurveData;

	// loop through children here
	for (int BoneIndex = 0; BoneIndex < BoneModels.Num(); ++BoneIndex)
	{
		BoneTransforms[BoneIndex] = UnrealTransformFromModel((FBModel*)BoneModels[BoneIndex]);
		ParentInverseTransforms[BoneIndex] = BoneTransforms[BoneIndex].Inverse();
		if (BoneParents[BoneIndex] != -1)
		{
			BoneTransforms[BoneIndex] = BoneTransforms[BoneIndex] * ParentInverseTransforms[BoneParents[BoneIndex]];
		}

		// Stream all parameters of all bones as "<BoneName>:<ParameterName>"
		CurveData.Append(GetAllAnimatableCurves((FBModel*)BoneModels[BoneIndex], BoneNames[BoneIndex].ToString()));
	}



	FBTime LocalTime = FBSystem().LocalTime;
	Provider->UpdateSubjectFrame(SubjectName, BoneTransforms, CurveData, LocalTime.GetSecondDouble());
};