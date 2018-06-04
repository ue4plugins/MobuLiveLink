// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkUtilities.h"

#define INCHES_TO_MILLIMETERS 25.4

FTransform MobuUtilities::MobuTransformToUnreal(FBMatrix& MobuTransfrom)
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

FTransform MobuUtilities::UnrealTransformFromModel(FBModel* MobuModel, bool bIsGlobal)
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

FTransform MobuUtilities::UnrealTransformFromCamera(FBCamera* CameraModel)
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
	FQuat CameraRotation = CameraTransform.GetRotation();
	FQuat LensRotation;
	LensRotation.MakeFromEuler(FVector(-90, -90, 0));
	CameraTransform.SetRotation(CameraRotation * LensRotation);

	return CameraTransform;
}

// Get all properties on a given model that are both Animatable and are of a Type we can stream
TArray<FLiveLinkCurveElement> MobuUtilities::GetAllAnimatableCurves(FBModel* MobuModel, const FString& Prefix)
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
		FString CurveName(Property->GetName());
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
			case kFBPT_enum: // Enums are assumed to be ints
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
			if (!Prefix.IsEmpty())
			{
				CurveName = Prefix + FString(":") + CurveName;
			}
			NewCurveElement.CurveName = FName(*CurveName);
			NewCurveElement.CurveValue = PropertyValue;

			LiveLinkCurves.Emplace(NewCurveElement);
		}
	}
	return LiveLinkCurves;
}

void MobuUtilities::AppendFilmbackSettings(FBCamera* CameraModel, TArray<FLiveLinkCurveElement>& CurveElements)
{
	// Film size isn't an animatable property so does not come through by default
	int NewItemIndex;
	double FilmSizeHeight, FilmSizeWidth, FilmAspectRatio;
	CameraModel->FilmSizeHeight.GetData(&FilmSizeHeight, sizeof(FilmSizeHeight), nullptr);
	CameraModel->FilmSizeWidth.GetData(&FilmSizeWidth, sizeof(FilmSizeWidth), nullptr);
	CameraModel->FilmAspectRatio.GetData(&FilmAspectRatio, sizeof(FilmAspectRatio), nullptr);

	NewItemIndex = CurveElements.AddDefaulted();
	CurveElements[NewItemIndex].CurveName = FName("FilmSizeHeight");
	CurveElements[NewItemIndex].CurveValue = FilmSizeHeight * INCHES_TO_MILLIMETERS;
	NewItemIndex = CurveElements.AddDefaulted();
	CurveElements[NewItemIndex].CurveName = FName("FilmSizeWidth");
	CurveElements[NewItemIndex].CurveValue = FilmSizeWidth * INCHES_TO_MILLIMETERS;
	NewItemIndex = CurveElements.AddDefaulted();
	CurveElements[NewItemIndex].CurveName = FName("FilmAspectRatio");
	CurveElements[NewItemIndex].CurveValue = FilmAspectRatio;
}

FLiveLinkFrameRate MobuUtilities::TimeModeToFrameRate(FBTimeMode TimeMode)
{
	switch (TimeMode)
	{
	case FBTimeMode::kFBTimeMode1000Frames:
		return FLiveLinkFrameRate(1000,1);
	case FBTimeMode::kFBTimeMode120Frames:
		return FLiveLinkFrameRate(120, 1);
	case FBTimeMode::kFBTimeMode100Frames:
		return FLiveLinkFrameRate(100, 1);
	case FBTimeMode::kFBTimeMode96Frames:
		return FLiveLinkFrameRate(96, 1);
	case FBTimeMode::kFBTimeMode72Frames:
		return FLiveLinkFrameRate(72, 1);
	case FBTimeMode::kFBTimeMode60Frames:
		return FLiveLinkFrameRate(60, 1);
	case FBTimeMode::kFBTimeMode5994Frames:
		return FLiveLinkFrameRate(60000, 1001);
	case FBTimeMode::kFBTimeMode50Frames:
		return FLiveLinkFrameRate(50, 1);
	case FBTimeMode::kFBTimeMode48Frames:
		return FLiveLinkFrameRate(48, 1);
	case FBTimeMode::kFBTimeMode30Frames:
		return FLiveLinkFrameRate(30, 1);
	case FBTimeMode::kFBTimeMode2997Frames_Drop:
		return FLiveLinkFrameRate(30000, 1001);
	case FBTimeMode::kFBTimeMode2997Frames:
		return FLiveLinkFrameRate(30000, 1001);
	case FBTimeMode::kFBTimeMode25Frames:
		return FLiveLinkFrameRate(25, 1);
	case FBTimeMode::kFBTimeMode24Frames:
		return FLiveLinkFrameRate(24, 1);
	case FBTimeMode::kFBTimeMode23976Frames:
		return FLiveLinkFrameRate(24000, 1001);
	case FBTimeMode::kFBTimeModeDefault:
	case FBTimeMode::kFBTimeModeCustom:
	default:
		return FLiveLinkFrameRate(FMath::RoundToInt(FBPlayerControl().GetTransportFpsValue() * 1001), 1001);
	}
}

void MobuUtilities::GetSceneTimecode(FLiveLinkTimeCode& SceneTimecode)
{
	FBTime LocalTime = FBSystem().LocalTime;

	SceneTimecode.FrameRate = TimeModeToFrameRate(FBPlayerControl().GetTransportFps());
	SceneTimecode.Seconds = FMath::FloorToInt(LocalTime.GetSecondDouble());
	SceneTimecode.Frames = LocalTime.GetFrame() %  FMath::CeilToInt((double)SceneTimecode.FrameRate.Numerator / (double)SceneTimecode.FrameRate.Denominator);
}

bool MobuUtilities::AreEqual(const FLiveLinkFrameRate& A, const FLiveLinkFrameRate& B)
{
	return (A.Numerator == B.Numerator) && (A.Denominator == B.Denominator);
}