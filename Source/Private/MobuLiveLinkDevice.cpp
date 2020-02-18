// Copyright Epic Games, Inc. All Rights Reserved.

//--- Class declaration
#include "MobuLiveLinkDevice.h"

//--- Stream object for the Editor camera
#include "MobuLiveLinkStreamObjects.h"

//--- Utility functions
#include "MobuLiveLinkUtilities.h"

//--- Allow ticking of the engine
#include "Containers/Ticker.h"

//--- For getting the dll location on disk
#include "Windows/AllowWindowsPlatformTypes.h"
#include <string>
#include "Misc/Paths.h"
EXTERN_C IMAGE_DOS_HEADER __ImageBase;

FString GetDeviceIconPath()
{
	char DllPath[MAX_PATH] = { 0 };
	GetModuleFileNameA((HINSTANCE)&__ImageBase, DllPath, _countof(DllPath));

	FString BasePath = FPaths::GetPath(FString(DllPath));
	FString FinalPath = FPaths::Combine(BasePath, FString("UE_128.png"));
	FBTrace("Device Icon Path - %s\n", FStringToChar(FinalPath));

	return FinalPath;
};

#include "Windows/HideWindowsPlatformTypes.h"

//--- Device strings
#define MOBULIVELINK__CLASS	MOBULIVELINK__CLASSNAME
#define MOBULIVELINK__NAME	MOBULIVELINK__CLASSSTR
#define MOBULIVELINK__LABEL	"UE - LiveLink"
#define MOBULIVELINK__DESC	"UE - LiveLink"

//--- MobuLiveLink  implementation and registration
FBDeviceImplementation	(	MOBULIVELINK__CLASS	);
FBRegisterDevice		(	MOBULIVELINK__NAME,
							MOBULIVELINK__CLASS,
							MOBULIVELINK__LABEL,
							MOBULIVELINK__DESC,
							FStringToChar(GetDeviceIconPath()));

/************************************************
 *	FMobuLiveLink Constructor.
 ************************************************/
bool FMobuLiveLink::FBCreate()
{
	// Set sampling rate to Before Render
	CurrentSampleRate = SampleOptions.Last().Value;
	UpdateSampleRate();

	StartLiveLink();
	FBSystem().Scene->OnChange.Add(this, (FBCallback)&FMobuLiveLink::EventSceneChange);

	TSharedPtr<IStreamObject> EditorCamera = MakeShared<FEditorActiveCameraStreamObject>();
	EditorCameraObject = EditorCamera;
	AddStreamObject(-1, EditorCamera);

	LastEvaluationTime = FPlatformTime::Seconds();
	TimecodeMode = ETimecodeMode::TimecodeMode_Local;

	FBTrace("MobuLiveLink FBCreate\n");
	return true;
}


/************************************************
 *	FMobuLiveLink Destructor.
 ************************************************/
void FMobuLiveLink::FBDestroy()
{
	FBSystem().Scene->OnChange.Remove(this, (FBCallback)&FMobuLiveLink::EventSceneChange);
	if (bShouldUpdateInRenderCallback)
	{
		FBEvaluateManager::TheOne().OnRenderingPipelineEvent.Remove(this, (FBCallback)&FMobuLiveLink::EventRenderUpdate);
		bShouldUpdateInRenderCallback = false;
	}

	TSharedPtr<IStreamObject> EditorCameraObjectPin = EditorCameraObject.Pin();
	if (EditorCameraObjectPin.IsValid())
	{
		LiveLinkProvider->RemoveSubject(EditorCameraObjectPin->GetSubjectName());
		FBTrace("Destroying Editor Camera\n");
	}

	StreamObjects.Empty();
	StopLiveLink();
	FBTrace("MobuLiveLink FBDestroy\n");
}

/************************************************
*	Device operation.
************************************************/
void FMobuLiveLink::UpdateSampleRate()
{
	FBTime	lPeriod;

	if (CurrentSampleRate == FFrameRate(-1, 1))
	{
		if (!bShouldUpdateInRenderCallback)
		{
			// After Render
			FBEvaluateManager::TheOne().OnRenderingPipelineEvent.Add(this, (FBCallback)&FMobuLiveLink::EventRenderUpdate);
			bShouldUpdateInRenderCallback = true;
		}

		lPeriod.SetSecondDouble(1.0);
	}
	else
	{
		if (bShouldUpdateInRenderCallback)
		{
			FBEvaluateManager::TheOne().OnRenderingPipelineEvent.Remove(this, (FBCallback)&FMobuLiveLink::EventRenderUpdate);
			bShouldUpdateInRenderCallback = false;
		}

		lPeriod.SetSecondDouble((double)CurrentSampleRate.Denominator / (double)CurrentSampleRate.Numerator);
	}
	FBTrace("Setting Sample Rate: %f\n", lPeriod.GetSecondDouble());
	SamplingPeriod = lPeriod;
}


/************************************************
 *	Device operation.
 ************************************************/
bool FMobuLiveLink::DeviceOperation(kDeviceOperations pOperation)
{
	switch (pOperation)
	{
		case kOpInit:	return Init();
		case kOpStart:	return Start();
		case kOpStop:	return Stop();
		case kOpReset:	return Reset();
		case kOpDone:	return Done();
	}
	return FBDevice::DeviceOperation( pOperation );
}

void FMobuLiveLink::SetDeviceInformation(const char* NewDeviceInformation)
{
	FString VersionString("v2.3 (");
	VersionString += __DATE__;
	VersionString += ")";
	HardwareVersionInfo.SetString(FStringToChar(VersionString));
	Information.SetString("Epic Games, Inc.");
	Status.SetString(NewDeviceInformation);
}


/************************************************
 *	Initialization of device.
 ************************************************/
bool FMobuLiveLink::Init()
{
	SetDeviceInformation("Status: Offline");
	return true;
}


/************************************************
 *	Device is put online.
 ************************************************/

bool FMobuLiveLink::Start()
{
	FBProgress	lProgress;
	lProgress.Caption = "Setting up device";
	lProgress.Text = "Setting sampling rate";

	SetDeviceInformation("Status: Online");
	return true;
}


/************************************************
 *	Device is stopped (offline).
 ************************************************/
bool FMobuLiveLink::Stop()
{
	FBProgress	lProgress;
	lProgress.Caption = "Shutting down device";

	SetDeviceInformation("Status: Offline");
	return false;
}


/************************************************
 *	Removal of device.
 ************************************************/
bool FMobuLiveLink::Done()
{
	return false;
}


/************************************************
 *	Reset of device.
 ************************************************/
bool FMobuLiveLink::Reset()
{
	Stop();
	return Start();
}

/************************************************
 *	Device Evaluation.
 ************************************************/
bool FMobuLiveLink::DeviceEvaluationNotify(kTransportMode pMode, FBEvaluateInfo* pEvaluateInfo)
{
	if (!bShouldUpdateInRenderCallback)
	{
		UpdateStream();
	}
	return true;
}

void FMobuLiveLink::EventRenderUpdate(HISender Sender, HKEvent Event)
{
	FBGlobalEvalCallbackTiming EventTiming = ((FBEventEvalGlobalCallback)Event).GetTiming();
	if (EventTiming == FBSDKNamespace::kFBGlobalEvalCallbackBeforeRender && this->Online)
	{
		UpdateStream();

		// Count samples here since we aren't doing it in DeviceIONotify for render callback usage
		AckOneSampleReceived();
	}
}

void FMobuLiveLink::UpdateStream()
{
	mCleanUpLock.Lock();

	TickCoreTicker();

	FLiveLinkWorldTime WorldTime;
	FQualifiedFrameTime QualifiedFrameTime = MobuUtilities::GetSceneTimecode(GetTimecodeMode());


	if (IsDirty())
	{
		UpdateStreamObjects();
	}
	for (TPair<int32, TSharedPtr<IStreamObject>>& MapPair : StreamObjects)
	{
		const TSharedPtr<IStreamObject>& StreamObject = MapPair.Value;
		StreamObject->UpdateSubjectFrame(LiveLinkProvider, WorldTime, QualifiedFrameTime);
	}

	mCleanUpLock.Unlock();
}


/************************************************
 *	Real-Time Synchronous Device IO.
 ************************************************/
void FMobuLiveLink::DeviceIONotify(kDeviceIOs pAction,FBDeviceNotifyInfo &pDeviceNotifyInfo)
{
	// If we are tied to the render callback, then we don't want to count samples here
	if (bShouldUpdateInRenderCallback)
	{
		return;
	}

	FBTime lEvalTime;
	switch (pAction)
	{
		// Output devices
		case kIOPlayModeWrite:
		case kIOStopModeWrite:
		{
			AckOneSampleSent();
		}
		break;
		// Input devices
		case kIOStopModeRead:
		case kIOPlayModeRead:
		{
			AckOneSampleReceived();
		}
		break;
	}
}

int32 FMobuLiveLink::GetCurrentSampleRateIndex()
{
	int32 CurrentSampleIdx = 0;
	for (int SampleIdx = 0; SampleIdx < SampleOptions.Num(); ++SampleIdx)
	{
		const FFrameRate& TestSampleRate = SampleOptions[SampleIdx].Value;
		if (CurrentSampleRate == TestSampleRate)
		{
			CurrentSampleIdx = SampleIdx;
			break;
		}
	}
	return CurrentSampleIdx;
}

//--- FBX load/save tags
#define MOBULIVELINK_FBX_DATA "MobuLiveLinkFBXDataV4"

/************************************************
* Save Format:
*    Str Provider Name
*    Int Stream editor camera
*    Int use local or system clock to produce timecode
*    Int sample rate index
*    Int Number of object
*      Str Root Name
*      Str Subject Name
*      Int Stream mode index
*      Int Active status
*      Int Animatable status
************************************************/

/************************************************
*	Store data in FBX.
************************************************/
bool FMobuLiveLink::FbxStore(FBFbxObject* pFbxObject, kFbxObjectStore pStoreWhat)
{
	if (pStoreWhat & kAttributes)
	{
		pFbxObject->FieldWriteBegin(MOBULIVELINK_FBX_DATA);
		{
			FBTrace("FbxStore started\n");
			// Provider Name
			pFbxObject->FieldWriteC(FStringToChar(GetProviderName()));

			// Stream editor camera
			pFbxObject->FieldWriteI(IsEditorCameraStreamed());

			// Use Local or System time for timecode
			pFbxObject->FieldWriteI(GetTimecodeModeAsInt());

			// Sample rate index
			pFbxObject->FieldWriteI(GetCurrentSampleRateIndex());

			// NumberOfObjects
			int NumberOfObjects = 0;
			for (TPair<int32, TSharedPtr<IStreamObject>>& MapPair : StreamObjects)
			{
				const FString StreamObjectRootName = MapPair.Value->GetRootName();
				if (StreamObjectRootName.Len() > 0)
				{
					++NumberOfObjects;
				}
			}
			pFbxObject->FieldWriteI(NumberOfObjects);

			for (TPair<int32, TSharedPtr<IStreamObject>>& MapPair : StreamObjects)
			{
				const FString StreamObjectRootName = MapPair.Value->GetRootName();
				if (StreamObjectRootName.Len() > 0)
				{
					const FName StreamObjectSubjectName = MapPair.Value->GetSubjectName();
					const int32 StreamObjectStreamingMode = MapPair.Value->GetStreamingMode();
					const int32 StreamObjectActive = MapPair.Value->GetActiveStatus();
					const int32 StreamAnimatableActive = MapPair.Value->GetSendAnimatableStatus();

					pFbxObject->FieldWriteC(TCHAR_TO_UTF8(*StreamObjectRootName));
					pFbxObject->FieldWriteC(TCHAR_TO_UTF8(*StreamObjectSubjectName.ToString()));
					pFbxObject->FieldWriteI(StreamObjectStreamingMode);
					pFbxObject->FieldWriteI(StreamObjectActive);
					pFbxObject->FieldWriteI(StreamAnimatableActive);
				}
			}
			pFbxObject->FieldWriteEnd();
			FBTrace("FbxStore finished\n");
		}
	}
	return true;
}

/************************************************
*	Retrieve data from FBX.
************************************************/
bool FMobuLiveLink::FbxRetrieve(FBFbxObject* pFbxObject, kFbxObjectStore pStoreWhat)
{
	if (pStoreWhat & kAttributes)
	{
		if (pFbxObject->FieldReadBegin(MOBULIVELINK_FBX_DATA))
		{
			FBTrace("FbxRetrieve started\n");
			// Provider Name
			SetProviderName(CharToFString(pFbxObject->FieldReadC()));

			// Stream editor camera
			const bool bStreamEditorCamera = pFbxObject->FieldReadI() != 0;
			SetEditorCameraStreamed(bStreamEditorCamera);

			// Use Local or System time for timecode
			const int32 ReadTimecodeModeInt = pFbxObject->FieldReadI();
			SetTimecodeModeFromInt(ReadTimecodeModeInt);

			// Sample rate index
			const int32 CurrentSampleIndex = pFbxObject->FieldReadI();
			if (CurrentSampleIndex > 0 && CurrentSampleIndex < SampleOptions.Num())
			{
				CurrentSampleRate = SampleOptions[CurrentSampleIndex].Value;
				UpdateSampleRate();
			}

			// NumberOfObjects
			const int32 NumberOfObjects = pFbxObject->FieldReadI();

			for (int32 i = 0; i < NumberOfObjects; ++i)
			{
				FBComponentList FoundModels;
				FString StreamObjectRootName(pFbxObject->FieldReadC());
				FBFindObjectsByName(TCHAR_TO_UTF8(*StreamObjectRootName), FoundModels, true, false);

				if (FoundModels.GetCount() > 0)
				{
					FBModel* FoundFBModel = (FBModel*)FoundModels[0];
					TSharedPtr<IStreamObject> FoundStreamObject = StreamObjectManagement::FBModelToStreamObject(FoundFBModel);

					FName SubjectName(pFbxObject->FieldReadC());
					int32 StreamingMode = pFbxObject->FieldReadI();
					
					bool bObjectActive = pFbxObject->FieldReadI() != 0;
					bool bStreamOAnimatableActive = pFbxObject->FieldReadI() != 0;

					FoundStreamObject->UpdateSubjectName(SubjectName);
					FoundStreamObject->UpdateStreamingMode(StreamingMode);
					FoundStreamObject->UpdateActiveStatus(bObjectActive);
					FoundStreamObject->UpdateSendAnimatableStatus(bStreamOAnimatableActive);

					// Add the object last so the SubjectName is correct
					AddStreamObject(GetNextUID(), FoundStreamObject);
				}
				else
				{
					pFbxObject->FieldReadC();
					pFbxObject->FieldReadI();
					pFbxObject->FieldReadI();
					pFbxObject->FieldReadI();
				}
			}
			pFbxObject->FieldReadEnd();

			SetRefreshUI(true);
			FBTrace("FbxRetrieve finished\n");
		}
	}
	return true;
}


void FMobuLiveLink::StartLiveLink()
{
	if (LiveLinkProvider != nullptr)
	{
		FBTrace("Live Link Provider '%s' already started!\n", FStringToChar(GetProviderName()));
		return;
	}

	LiveLinkProvider = ILiveLinkProvider::CreateLiveLinkProvider(GetProviderName());

	UpdateStreamObjects();
	
	FBTrace("Live Link Provider '%s' started!\n", FStringToChar(GetProviderName()));
}


void FMobuLiveLink::StopLiveLink()
{
	TickCoreTicker();
	if (LiveLinkProvider.IsValid())
	{
		FBTrace("LiveLinkProvider References: %d\n", LiveLinkProvider.GetSharedReferenceCount());
		LiveLinkProvider = nullptr;
		FBTrace("Deleting Live Link\n");
	}
	FBTrace("Live Link Provider '%s' stopped!\n", FStringToChar(GetProviderName()));
}

void FMobuLiveLink::EventSceneChange(HISender Sender, HKEvent Event)
{
	FBEventSceneChange SceneChangeEvent = Event;
	switch (SceneChangeEvent.Type)
	{
	case kFBSceneChangeSelect:
	case kFBSceneChangeUnselect:
	case kFBSceneChangeReSelect:
	case kFBSceneChangeFocus:
	case kFBSceneChangeSoftSelect:
	case kFBSceneChangeSoftUnselect:
	case kFBSceneChangeHardSelect:
	case kFBSceneChangeTransactionBegin:
	case kFBSceneChangeTransactionEnd:
		return;
	case kFBSceneChangeLoadBegin:
		// Crashes if you try and stream while loading a new file
		DeviceOperation(FBDevice::kOpStop);
		return;
	default:
		SetDirty(true);
		break;
	}

}

void FMobuLiveLink::AddStreamObject(int32 NewUID, StreamObjectPtr NewObject)
{
	if (NewObject->IsValid())
	{
		FBTrace("Added new Subject '%s' to StreamObjects\n", FStringToChar(NewObject->GetSubjectName().ToString()));
		StreamObjects.Emplace(NewUID, NewObject);

		SetDirty(true);
	}
}

void FMobuLiveLink::RemoveStreamObject(int32 DeletionKey, StreamObjectPtr RemoveObject)
{
	if (RemoveObject->IsValid())
	{
		FBTrace("Removed Subject '%s' from StreamObjects\n", FStringToChar(RemoveObject->GetSubjectName().ToString()));
		StreamObjects.Remove(DeletionKey);
		LiveLinkProvider->RemoveSubject(RemoveObject->GetSubjectName());

		SetDirty(true);
	}
}

void FMobuLiveLink::ChangeSubjectName(StreamObjectPtr ObjectPtr, const char* NewSubjectNameStr)
{
	if (ObjectPtr->GetSubjectName() != NewSubjectNameStr)
	{
		FBTrace("Subject Name changed from '%s' to '%s'\n", FStringToChar(ObjectPtr->GetSubjectName().ToString()), NewSubjectNameStr);
		LiveLinkProvider->RemoveSubject(ObjectPtr->GetSubjectName());
		ObjectPtr->UpdateSubjectName(FName(NewSubjectNameStr));

		SetDirty(true);
	}
}

void FMobuLiveLink::UpdateStreamObjects()
{
	for (TPair<int32, TSharedPtr<IStreamObject>>& MapPair : StreamObjects)
	{
		const TSharedPtr<IStreamObject>& StreamObject = MapPair.Value;
		if (StreamObject->IsValid())
		{
			StreamObject->Refresh(LiveLinkProvider);
		}
		else
		{
			FBTrace("UpdateStreamObjects - StreamObject for key %d isn't valid - this should never happen!\nPossible error in LiveLink subject list!", MapPair.Key);
		}	
	}
	SetDirty(false);
	SetRefreshUI(true);
}

void FMobuLiveLink::TickCoreTicker()
{
	double CurrentTime = FPlatformTime::Seconds();
	FTicker::GetCoreTicker().Tick(CurrentTime - LastEvaluationTime);
	LastEvaluationTime = CurrentTime;
}

int32 FMobuLiveLink::GetNextUID()
{
	return NextUID++;
}

bool FMobuLiveLink::IsEditorCameraStreamed() const
{
	TSharedPtr<IStreamObject> EditorCameraObjectPin = EditorCameraObject.Pin();
	if (EditorCameraObjectPin.IsValid())
	{
		return EditorCameraObjectPin->GetActiveStatus();
	}
	return false;
}

void FMobuLiveLink::SetEditorCameraStreamed(bool bStream)
{
	TSharedPtr<IStreamObject> EditorCameraObjectPin = EditorCameraObject.Pin();
	if (EditorCameraObjectPin.IsValid())
	{
		EditorCameraObjectPin->UpdateActiveStatus(bStream);
	}
}

ETimecodeMode FMobuLiveLink::GetTimecodeMode() const
{
	return TimecodeMode;
}

int32 FMobuLiveLink::GetTimecodeModeAsInt() const
{
	return (int32)TimecodeMode;
}

void FMobuLiveLink::SetTimecodeMode(ETimecodeMode InTimecodeMode)
{
	TimecodeMode = InTimecodeMode;
}

void FMobuLiveLink::SetTimecodeModeFromInt(int32 InTimecodeModeInt)
{
	switch (InTimecodeModeInt)
	{
		case 2:		TimecodeMode = ETimecodeMode::TimecodeMode_Reference;
					break;

		case 1:		TimecodeMode = ETimecodeMode::TimecodeMode_System;
					break;

		// Intentional fallthrough
		case 0:
		default:	TimecodeMode = ETimecodeMode::TimecodeMode_Local;
					break;
	}
}

void FMobuLiveLink::SetProviderName(const FString& NewValue)
{
	if (NewValue != GetProviderName())
	{
		StopLiveLink();
		CurrentProviderName = NewValue;
		StartLiveLink();

		SetRefreshUI(true);
	}
}