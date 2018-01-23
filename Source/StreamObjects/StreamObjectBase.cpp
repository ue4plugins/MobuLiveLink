#include "StreamStore.h"

// Creation / Destruction

StreamObjectBase::StreamObjectBase(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider, std::initializer_list<FString> Options)
	: RootModel(ModelPointer), Provider(StreamProvider), ConnectionOptions(Options), bIsActive(true), StreamingMode(0)
{
	FString ModelLongName(ANSI_TO_TCHAR(RootModel->LongName));
	FString RightString;
	ModelLongName.Split(TEXT(":"), &ModelLongName, &RightString);
	SubjectName = FName(*ModelLongName);
};

// Model-less constructor
StreamObjectBase::StreamObjectBase(const FName InSubjectName, const TSharedPtr<ILiveLinkProvider> StreamProvider)
	: RootModel(nullptr), SubjectName(InSubjectName), Provider(StreamProvider), bIsActive(true), StreamingMode(0)
{
};

StreamObjectBase::~StreamObjectBase()
{
	Provider->ClearSubject(SubjectName);
};

// Stream Object Interface

FString StreamObjectBase::GetStreamOptions()
{
	return FString::Join(ConnectionOptions, _T("~"));
};

FName StreamObjectBase::GetSubjectName() const 
{ 
	return SubjectName; 
};

void StreamObjectBase::UpdateSubjectName(FName NewSubjectName)
{
	Provider->ClearSubject(SubjectName);
	SubjectName = NewSubjectName;
	UpdateFromModel();
};


int StreamObjectBase::GetStreamingMode() const
{
	return StreamingMode;
};

void StreamObjectBase::UpdateStreamingMode(int NewStreamingMode)
{
	StreamingMode = NewStreamingMode;
	UpdateFromModel();
};


bool StreamObjectBase::GetActiveStatus() const
{
	return bIsActive;
};

void StreamObjectBase::UpdateActiveStatus(bool bIsNowActive)
{
	bIsActive = bIsNowActive;
	UpdateFromModel();
};

const FBModel* StreamObjectBase::GetRootModel()
{
	return RootModel;
};

bool StreamObjectBase::IsValid()
{
	// By Default an object is valid if the root model is in the scene
	return FBSystem().Scene->Components.Find((FBComponent*)GetRootModel()) >= 0;
};


// Equality comparison

bool StreamObjectBase::operator==(const StreamObjectBase &other) const 
{
	return (this->RootModel == other.RootModel);
};


// Utility Functions

FTransform StreamObjectBase::MobuTransformToUnreal(FBMatrix& MobuTransfrom)
{
	FBMatrix MobuTransformUnrealSpace;
	FBTVector TVector;
	FBSVector SVector;
	FBQuaternion Quat;
	for (int j = 0; j < 4; ++j)
	{
		if (j == 1)
		{
			MobuTransformUnrealSpace(j, 0) = -MobuTransfrom(j, 0);
			MobuTransformUnrealSpace(j, 1) = MobuTransfrom(j, 1);
			MobuTransformUnrealSpace(j, 2) = -MobuTransfrom(j, 2);
			MobuTransformUnrealSpace(j, 3) = -MobuTransfrom(j, 3);
		}
		else
		{
			MobuTransformUnrealSpace(j, 0) = MobuTransfrom(j, 0);
			MobuTransformUnrealSpace(j, 1) = -MobuTransfrom(j, 1);
			MobuTransformUnrealSpace(j, 2) = MobuTransfrom(j, 2);
			MobuTransformUnrealSpace(j, 3) = MobuTransfrom(j, 3);
		}
	}

	FBMatrixToTranslation(TVector, MobuTransformUnrealSpace);
	FBMatrixToQuaternion(Quat, MobuTransformUnrealSpace);
	FBMatrixToScaling(SVector, MobuTransformUnrealSpace);

	FTransform UnrealTransform;
	UnrealTransform.SetRotation(FQuat(Quat[0], Quat[1], Quat[2], Quat[3]));
	UnrealTransform.SetTranslation(FVector(TVector[0], TVector[1], TVector[2]));
	UnrealTransform.SetScale3D(FVector(SVector[0], SVector[1], SVector[2]));

	return UnrealTransform;
};

FTransform StreamObjectBase::UnrealTransformFromModel(FBModel* MobuModel, bool bIsGlobal)
{
	FBMatrix MobuTransform;
	FBMatrix MatOffset;

	MobuModel->GetMatrix(MobuTransform, kModelTransformation, bIsGlobal, nullptr);

	// Y-Up Correction
	FBRVector RotOffset(90, 0, 0);
	FBRotationToMatrix(MatOffset, RotOffset);
	FBMatrixMult(MobuTransform, MatOffset, MobuTransform);

	return MobuTransformToUnreal(MobuTransform);
};

FTransform StreamObjectBase::UnrealTransformFromCamera(FBCamera* CameraModel)
{
	// MotionBuilder suggests that GetMatrix is deprecated for Cameras and to 
	// reconstruct from the Camera Matrices explicitly

	FBMatrix ModelView;
	FBMatrix MatOffset;

	CameraModel->GetCameraMatrix(ModelView, FBCameraMatrixType::kFBModelView, nullptr);
	FBMatrix InvModelView = ModelView.Inverse();

	// Y-Up Correction
	FBRVector RotOffset(90, 0, 0);
	FBRotationToMatrix(MatOffset, RotOffset);
	FBMatrixMult(ModelView, MatOffset, ModelView);

	// Camera is now in Unreal Space
	FTransform CameraTransform = MobuTransformToUnreal(ModelView);

	// Mobu Cameras look down a different axis so flip them here
	// TODO: Consolidate with MobuTransformToUnreal so we're not repeating work
	FQuat CameraRotation = CameraTransform.GetRotation();
	FQuat LensRotation;
	LensRotation.MakeFromEuler(FVector(-90, -90, 0));
	CameraTransform.SetRotation(CameraRotation * LensRotation);

	return CameraTransform;
}

// Get all properties on a given model that are both Animatable and are of a Type we can stream
TArray<FLiveLinkCurveElement> StreamObjectBase::GetAllAnimatableCurves(FBModel* MobuModel)
{
	int PropertyCount = MobuModel->PropertyList.GetCount();

	TArray<FLiveLinkCurveElement> LiveLinkCurves;
	// Reserve enough memory for worst case
	LiveLinkCurves.Reserve(PropertyCount); 

	float PropertyValue;
	FName PropertyName;
	for (int i = 0; i < PropertyCount; ++i)
	{
		FBProperty* Property = MobuModel->PropertyList[i];
		if (Property->IsAnimatable())
		{
			switch (Property->GetPropertyType())
			{
			case kFBPT_bool:
			{
				bool bValue;
				Property->GetData(&bValue, sizeof(bValue), nullptr);
				PropertyValue = bValue ? 1.0f : 0.0f;
				break;
			}
			case kFBPT_double:
			{
				double Value;
				Property->GetData(&Value, sizeof(Value), nullptr);
				PropertyValue = (float)Value;
				break;
			}
			case kFBPT_float:
			{
				// PropertyValue is a float so retrieve it directly
				Property->GetData(&PropertyValue, sizeof(PropertyValue), nullptr);
				break;
			}
			case kFBPT_enum: // Enums are assumed to be ints. THIS MAY NOT BE A VALID ASSUMPTION
			case kFBPT_int:
			{
				int Value;
				Property->GetData(&Value, sizeof(Value), nullptr);
				PropertyValue = (float)Value;
				break;
			}
			case kFBPT_int64:
			{
				int64 Value;
				Property->GetData(&Value, sizeof(Value), nullptr);
				PropertyValue = (float)Value;
				break;
			}
			case kFBPT_uint64:
			{
				uint64 Value;
				Property->GetData(&Value, sizeof(Value), nullptr);
				PropertyValue = (float)Value;
				break;
			}
			default:
				continue;
			}

			FLiveLinkCurveElement NewCurveElement;
			NewCurveElement.CurveName = FName(Property->GetName());;
			NewCurveElement.CurveValue = PropertyValue;

			LiveLinkCurves.Emplace(NewCurveElement);
		}
	}
	return LiveLinkCurves;
}




