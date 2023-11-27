// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkUtilities.h"

const float MobuUtilities::InchesToMillimeters = 25.4f;

FTransform MobuUtilities::MobuTransformToUnreal(FBMatrix MobuTransfrom)
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
}

FColor MobuUtilities::MobuColorToUnreal(FBColor Color)
{
	FColor Result;
	Result.R = FMath::Clamp(Color[0] * 255.0, 0.0, 255.0);
	Result.G = FMath::Clamp(Color[1] * 255.0, 0.0, 255.0);
	Result.B = FMath::Clamp(Color[2] * 255.0, 0.0, 255.0);
	Result.A = 255;
	return Result;
}

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

// Get all properties on a given model that are both Animatable and are of a Type we can stream
TArray<FName> MobuUtilities::GetAllAnimatableCurveNames(FBModel* MobuModel, const FString& Prefix)
{
	const int PropertyCount = MobuModel->PropertyList.GetCount();

	TArray<FName> LiveLinkCurves;
	// Reserve enough memory for worst case
	LiveLinkCurves.Reserve(PropertyCount);

	for (int i = 0; i < PropertyCount; ++i)
	{
		FBProperty* Property = MobuModel->PropertyList[i];
		if (Property->IsAnimatable())
		{
			//Only add supported property
			switch (Property->GetPropertyType())
			{
			case kFBPT_bool:
			case kFBPT_double:
			case kFBPT_float:
			case kFBPT_enum:
			case kFBPT_int:
			case kFBPT_int64:
			case kFBPT_uint64:
				break;
			default:
				continue;
			}

			if (!Prefix.IsEmpty())
			{
				LiveLinkCurves.Add(*(Prefix + FString(":") + Property->GetName()));
			}
			else
			{
				LiveLinkCurves.Add(Property->GetName());
			}
		}
	}
	return LiveLinkCurves;
}

TArray<float> MobuUtilities::GetAllAnimatableCurveValues(FBModel* MobuModel)
{
	int PropertyCount = MobuModel->PropertyList.GetCount();

	TArray<float> LiveLinkCurves;
	// Reserve enough memory for worst case
	LiveLinkCurves.Reserve(PropertyCount);

	float PropertyValue;
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
			LiveLinkCurves.Add(PropertyValue);
		}
	}
	return LiveLinkCurves;
}

FFrameRate MobuUtilities::TimeModeToFrameRate(FBTimeMode TimeMode)
{
	switch (TimeMode)
	{
	case FBTimeMode::kFBTimeMode1000Frames:
		return FFrameRate(1000,1);
	case FBTimeMode::kFBTimeMode120Frames:
		return FFrameRate(120, 1);
	case FBTimeMode::kFBTimeMode100Frames:
		return FFrameRate(100, 1);
	case FBTimeMode::kFBTimeMode96Frames:
		return FFrameRate(96, 1);
	case FBTimeMode::kFBTimeMode72Frames:
		return FFrameRate(72, 1);
	case FBTimeMode::kFBTimeMode60Frames:
		return FFrameRate(60, 1);
	case FBTimeMode::kFBTimeMode5994Frames:
		return FFrameRate(60000, 1001);
	case FBTimeMode::kFBTimeMode50Frames:
		return FFrameRate(50, 1);
	case FBTimeMode::kFBTimeMode48Frames:
		return FFrameRate(48, 1);
	case FBTimeMode::kFBTimeMode30Frames:
		return FFrameRate(30, 1);
	case FBTimeMode::kFBTimeMode2997Frames_Drop:
		return FFrameRate(30000, 1001);
	case FBTimeMode::kFBTimeMode2997Frames:
		return FFrameRate(30000, 1001);
	case FBTimeMode::kFBTimeMode25Frames:
		return FFrameRate(25, 1);
	case FBTimeMode::kFBTimeMode24Frames:
		return FFrameRate(24, 1);
	case FBTimeMode::kFBTimeMode23976Frames:
		return FFrameRate(24000, 1001);
	case FBTimeMode::kFBTimeModeDefault:
	case FBTimeMode::kFBTimeModeCustom:
	default:
		return FFrameRate(FMath::RoundToInt(FBPlayerControl().GetTransportFpsValue() * 1001), 1001);
	}
}

FQualifiedFrameTime MobuUtilities::GetSceneTimecode(ETimecodeMode TimecodeMode)
{
	FBTimeMode TimeMode = FBPlayerControl().GetTransportFps();
	FFrameRate FrameRate = TimeModeToFrameRate(TimeMode);
	FFrameTime FrameTime;

	// Make sure we use the decimal frame time instead of the integer frame number to keep subframes
	if (TimecodeMode == ETimecodeMode::TimecodeMode_Local)			// Local time (Take time)
	{
		FBTime MobuTime = FBSystem().LocalTime;
		FrameTime = FFrameTime(FrameRate.AsFrameTime(MobuTime.GetSecondDouble()));
	}
	else if (TimecodeMode == ETimecodeMode::TimecodeMode_System)	// System time (PC clock)
	{
		const FDateTime DateTime = FDateTime::Now();
		const FTimespan Timespan = DateTime.GetTimeOfDay();
		FrameTime = FFrameTime(FrameRate.AsFrameTime(Timespan.GetTotalSeconds()));
	}
	else if (TimecodeMode == ETimecodeMode::TimecodeMode_Reference)	// Reference time (Incoming LTC)
	{
		FBReferenceTime MobuRefTime;
		#if PRODUCT_VERSION >= 2019
		FBArrayTemplate<int> Identifiers;
		MobuRefTime.GetUniqueIDList(&Identifiers);
		if (Identifiers.GetCount() > 0)
		{
			FBTime RefTime = MobuRefTime.GetTime(MobuRefTime.CurrentTimeReferenceID, FBTime(0));
			FrameTime = FFrameTime(FrameRate.AsFrameTime(RefTime.GetSecondDouble()));
		}
		else
		{
			FBTrace("GetSceneTimecode - No Reference time sources\n");
		}
		#else
		if (MobuRefTime.Count > 0)
		{
			FBTime RefTime = MobuRefTime.GetTime(MobuRefTime.ItemIndex, FBTime(0));
			FrameTime = FFrameTime(FrameRate.AsFrameTime(RefTime.GetSecondDouble()));
		}
		else
		{
			FBTrace("GetSceneTimecode - No Reference time sources\n");
		}
		#endif
		
	}
	else
	{
		FBTrace("GetSceneTimecode - Invalid timecode mode\n");
	}

	return FQualifiedFrameTime(FrameTime, FrameRate);
}