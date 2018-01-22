//--- Class declaration
#include "MobuLiveLinkDevice.h"

//--- For getting the dll location on disk
#include "Windows.h"
#include <string>
#include "Paths.h"
EXTERN_C IMAGE_DOS_HEADER __ImageBase;

FString GetDeviceIconPath()
{
	char   DllPath[MAX_PATH] = { 0 };
	GetModuleFileNameA((HINSTANCE)&__ImageBase, DllPath, _countof(DllPath));

	FString BasePath = FPaths::GetPath(FString(DllPath));
	FString FinalPath = FPaths::Combine(BasePath, FString("UE_128.png"));
	FBTrace("%s\n", FStringToChar(FinalPath));

	return FinalPath;
};

//--- Device strings
#define MOBULIVELINK__CLASS	MOBULIVELINK__CLASSNAME
#define MOBULIVELINK__NAME	MOBULIVELINK__CLASSSTR
#define MOBULIVELINK__LABEL	"UE - LiveLink"
#define MOBULIVELINK__DESC	"UE - LiveLink"
#define MOBULIVELINK__PREFIX	"LightController"

//--- FiLMBOX implementation and registration
FBDeviceImplementation	(	MOBULIVELINK__CLASS	);
FBRegisterDevice		(	MOBULIVELINK__NAME,
							MOBULIVELINK__CLASS,
							MOBULIVELINK__LABEL,
							MOBULIVELINK__DESC,
							FStringToChar(GetDeviceIconPath()));

struct ScopedFastLock
{
	ScopedFastLock(FBFastLock &lock) : _lock(lock) { _lock.Lock(); }
	~ScopedFastLock() { _lock.Unlock(); }
	FBFastLock &_lock;
};

/************************************************
 *	FiLMBOX Constructor.
 ************************************************/
bool MobuLiveLink::FBCreate()
{
	// Set sampling rate to 60 Hz
	// Fixed for now but will be getting a dropdown UI soon
	FBTime	lPeriod;
	lPeriod.SetSecondDouble(1.0/60.0);
	SamplingPeriod	= lPeriod;

	StartLiveLink();
	FBSystem().Scene->OnChange.Add(this, (FBCallback)&MobuLiveLink::EventSceneChange);

	SetDirty(false);

	TSharedPtr<StreamObjectBase> EditorCamera((StreamObjectBase*)(new EditorActiveCameraStreamObject(LiveLinkProvider)));
	StreamObjects.Emplace((kReference)nullptr, EditorCamera);

	return true;
}


/************************************************
 *	FiLMBOX Destructor.
 ************************************************/
void MobuLiveLink::FBDestroy()
{
	FBSystem().Scene->OnChange.Remove(this, (FBCallback)&MobuLiveLink::EventSceneChange);
	StopLiveLink();
}


/************************************************
 *	Device operation.
 ************************************************/
bool MobuLiveLink::DeviceOperation( kDeviceOperations pOperation )
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

void MobuLiveLink::SetDeviceInformation(const char* NewDeviceInformation)
{
	HardwareVersionInfo.SetString("Version 0.1");
	Information.SetString(NewDeviceInformation);
	Status.SetString("Epic Games 2017");
}


/************************************************
 *	Initialization of device.
 ************************************************/
bool MobuLiveLink::Init()
{
	SetDeviceInformation("Status: Offline");
	return true;
}


/************************************************
 *	Device is put online.
 ************************************************/

bool MobuLiveLink::Start()
{
	FBProgress	lProgress;
	lProgress.Caption	= "Setting up device";
	lProgress.Text	= "Setting sampling rate";

	SetDeviceInformation("Status: Online");

	return true;
}


/************************************************
 *	Device is stopped (offline).
 ************************************************/
bool MobuLiveLink::Stop()
{
	FBProgress	lProgress;
	lProgress.Caption	= "Shutting down device";

	SetDeviceInformation("Status: Offline");

    return false;
}


/************************************************
 *	Removal of device.
 ************************************************/
bool MobuLiveLink::Done()
{
	return false;
}


/************************************************
 *	Reset of device.
 ************************************************/
bool MobuLiveLink::Reset()
{
    Stop();
    return Start();
}

/************************************************
 *	Device Evaluation Notify.
 ************************************************/
bool MobuLiveLink::DeviceEvaluationNotify(kTransportMode pMode, FBEvaluateInfo* pEvaluateInfo)
{
	ScopedFastLock scoped_lock(mCleanUpLock);
	if (IsDirty())
	{
		UpdateStreamObjects();
	}
	for (auto MapPair : StreamObjects)
	{
		MapPair.Value->GetStreamData();
	}
	return true;
}


/************************************************
 *	Real-Time Synchronous Device IO.
 ************************************************/
void MobuLiveLink::DeviceIONotify( kDeviceIOs  pAction,FBDeviceNotifyInfo &pDeviceNotifyInfo)
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


//--- FBX load/save tags
#define FBX_TAG_SECTION		MOBULIVELINK__CLASSSTR
#define FBX_TAG_SERIALPORT	"SerialPort"

/************************************************
 *	Store data in FBX.
 ************************************************/
bool MobuLiveLink::FbxStore(FBFbxObject* pFbxObject,kFbxObjectStore pStoreWhat)
{
	if (pStoreWhat & kAttributes)
	{
		// serial port
	}
	return true;
}


/************************************************
 *	Retrieve data from FBX.
 ************************************************/
bool MobuLiveLink::FbxRetrieve(FBFbxObject* pFbxObject,kFbxObjectStore pStoreWhat)
{
	if (pStoreWhat & kAttributes)
	{
		// serial port
	}
	return true;
}


void MobuLiveLink::StartLiveLink()
{
	StopLiveLink();
	LiveLinkProvider = ILiveLinkProvider::CreateLiveLinkProvider(mProviderName);
	
	FBTrace("Live Link Started!\n");
}


void MobuLiveLink::StopLiveLink()
{
	if (LiveLinkProvider.IsValid())
	{
		LiveLinkProvider = nullptr;
		FBTrace("Deleting Live Link\n");
	}
	FBTrace("Live Link Stopped!\n");
}

void MobuLiveLink::EventSceneChange(HISender Sender, HKEvent Event)
{
	// todo: Possibly other events I need to handle

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

void MobuLiveLink::UpdateStreamObjects()
{
	for (auto MapPair : StreamObjects)
	{
		if (MapPair.Value->IsValid())
		{
			MapPair.Value->UpdateFromModel();
		}
		else
		{
			StreamObjects.Remove(MapPair.Key);
		}	
	}
	SetDirty(false);
	SetRefreshUI(true);
}