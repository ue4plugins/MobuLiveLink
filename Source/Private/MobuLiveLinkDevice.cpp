// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

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

	SetDirty(false);

	TSharedPtr<IStreamObject> EditorCamera = MakeShared<FEditorActiveCameraStreamObject>(LiveLinkProvider);
	EditorCameraObject = EditorCamera;
	StreamObjects.Emplace(-1, EditorCamera);

	LastEvaluationTime = FPlatformTime::Seconds();

	FBTrace("Creating Editor Camera\n");
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
	}
	StreamObjects.Empty();
	StopLiveLink();
}

/************************************************
*	Device operation.
************************************************/
void FMobuLiveLink::UpdateSampleRate()
{
	FBTime	lPeriod;

	if (CurrentSampleRate == FFrameRate(-1, 1))
	{
		// After Render
		FBEvaluateManager::TheOne().OnRenderingPipelineEvent.Add(this, (FBCallback)&FMobuLiveLink::EventRenderUpdate);

		bShouldUpdateInRenderCallback = true;

		lPeriod.SetSecondDouble(1.0);
	}
	else
	{
		if (bShouldUpdateInRenderCallback)
		{
			FBEvaluateManager::TheOne().OnRenderingPipelineEvent.Remove(this, (FBCallback)&FMobuLiveLink::EventRenderUpdate);
		}

		bShouldUpdateInRenderCallback = false;

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
	HardwareVersionInfo.SetString("Version 2.0");
	Information.SetString(NewDeviceInformation);
	Status.SetString("Epic Games 2019");
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
	}
}

void FMobuLiveLink::UpdateStream()
{
	mCleanUpLock.Lock();

	TickCoreTicker();

	if (IsDirty())
	{
		UpdateStreamObjects();
	}
	for (TPair<int32, TSharedPtr<IStreamObject>>& MapPair : StreamObjects)
	{
		const TSharedPtr<IStreamObject>& StreamObject = MapPair.Value;
		StreamObject->UpdateSubjectFrame();
	}

	mCleanUpLock.Unlock();
}


/************************************************
 *	Real-Time Synchronous Device IO.
 ************************************************/
void FMobuLiveLink::DeviceIONotify(kDeviceIOs pAction,FBDeviceNotifyInfo &pDeviceNotifyInfo)
{
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
#define MOBULIVELINK_FBX_DATA "MobuLiveLinkFBXDataV3"

/************************************************
* Save Format:
*    Str Provider Name
*    Int Stream editor camera
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
			// Provider Name
			pFbxObject->FieldWriteC(FStringToChar(GetProviderName()));

			// Stream editor camera
			pFbxObject->FieldWriteI(IsEditorCameraStreamed());

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
			// Provider Name
			SetProviderName(CharToFString(pFbxObject->FieldReadC()));

			// Stream editor camera
			const bool bStreamEditorCamera = pFbxObject->FieldReadI() != 0;
			SetEditorCameraStreamed(bStreamEditorCamera);

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
					TSharedPtr<IStreamObject> FoundStreamObject = StreamObjectManagement::FBModelToStreamObject(FoundFBModel, LiveLinkProvider);
					StreamObjects.Emplace(GetNextUID(), FoundStreamObject);

					FName SubjectName(pFbxObject->FieldReadC());
					int32 StreamingMode = pFbxObject->FieldReadI();
					
					bool bObjectActive = pFbxObject->FieldReadI() != 0;
					bool bStreamOAnimatableActive = pFbxObject->FieldReadI() != 0;

					FoundStreamObject->UpdateSubjectName(SubjectName);
					FoundStreamObject->UpdateStreamingMode(StreamingMode);
					FoundStreamObject->UpdateActiveStatus(bObjectActive);
					FoundStreamObject->UpdateSendAnimatableStatus(bStreamOAnimatableActive);
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
		}
	}
	return true;
}


void FMobuLiveLink::StartLiveLink()
{
	StopLiveLink();

	LiveLinkProvider = ILiveLinkProvider::CreateLiveLinkProvider(GetProviderName());
	
	FBTrace("Live Link Started!\n");
}


void FMobuLiveLink::StopLiveLink()
{
	TickCoreTicker();
	if (LiveLinkProvider.IsValid())
	{
		FBTrace("Provider References: %d\n", LiveLinkProvider.GetSharedReferenceCount());
		LiveLinkProvider = nullptr;
		FBTrace("Deleting Live Link\n");
	}
	FBTrace("Live Link Stopped!\n");
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

void FMobuLiveLink::UpdateStreamObjects()
{
	for (TPair<int32, TSharedPtr<IStreamObject>>& MapPair : StreamObjects)
	{
		const TSharedPtr<IStreamObject>& StreamObject = MapPair.Value;
		if (StreamObject->IsValid())
		{
			StreamObject->Refresh();
		}
		else
		{
			StreamObjects.Remove(MapPair.Key);
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

void FMobuLiveLink::SetProviderName(const FString& NewValue)
{
	if (NewValue != GetProviderName())
	{
		CurrentProviderName = NewValue;
		FBDestroy();
		FBCreate();
		SetDirty(false);
		SetRefreshUI(true);
	}
}