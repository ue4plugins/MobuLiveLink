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

	SceneChangeNameMap.Emplace(kFBSceneChangeNone,					"Unknown event");
	SceneChangeNameMap.Emplace(kFBSceneChangeDestroy,				"Object destroyed");
	SceneChangeNameMap.Emplace(kFBSceneChangeAttach,				"Object attached");
	SceneChangeNameMap.Emplace(kFBSceneChangeDetach,				"Object detached");
	SceneChangeNameMap.Emplace(kFBSceneChangeAddChild,				"Child added");
	SceneChangeNameMap.Emplace(kFBSceneChangeRemoveChild,			"Child removed");
	SceneChangeNameMap.Emplace(kFBSceneChangeSelect,				"Object selection");
	SceneChangeNameMap.Emplace(kFBSceneChangeUnselect,				"Object deselection");
	SceneChangeNameMap.Emplace(kFBSceneChangeRename,				"Before object rename");
	SceneChangeNameMap.Emplace(kFBSceneChangeRenamePrefix,			"Before object rename prefix");
	SceneChangeNameMap.Emplace(kFBSceneChangeRenameUnique,			"Before object rename unique");
	SceneChangeNameMap.Emplace(kFBSceneChangeRenameUniquePrefix,	"Before object rename unique prefix");
	SceneChangeNameMap.Emplace(kFBSceneChangeRenamed,				"After object rename");
	SceneChangeNameMap.Emplace(kFBSceneChangeRenamedPrefix,			"After object rename prefix");
	SceneChangeNameMap.Emplace(kFBSceneChangeRenamedUnique,			"After object rename unique");
	SceneChangeNameMap.Emplace(kFBSceneChangeRenamedUniquePrefix,	"After object rename unique prefix");
	SceneChangeNameMap.Emplace(kFBSceneChangeSoftSelect,			"Soft selection");
	SceneChangeNameMap.Emplace(kFBSceneChangeSoftUnselect,			"Soft deselection");
	SceneChangeNameMap.Emplace(kFBSceneChangeHardSelect,			"Hard selection");
	SceneChangeNameMap.Emplace(kFBSceneChangeActivate,				"Activate");
	SceneChangeNameMap.Emplace(kFBSceneChangeDeactivate,			"Deactivate");
	SceneChangeNameMap.Emplace(kFBSceneChangeLoadBegin,				"Begin loading file");
	SceneChangeNameMap.Emplace(kFBSceneChangeLoadEnd,				"End loading file");
	SceneChangeNameMap.Emplace(kFBSceneChangeClearBegin,			"Begin clearing file (file new)");
	SceneChangeNameMap.Emplace(kFBSceneChangeClearEnd,				"End clearing file (file new)");
	SceneChangeNameMap.Emplace(kFBSceneChangeTransactionBegin,		"Begin transaction");
	SceneChangeNameMap.Emplace(kFBSceneChangeTransactionEnd,		"End transaction");
	SceneChangeNameMap.Emplace(kFBSceneChangeMergeTransactionBegin, "Begin merge transaction");
	SceneChangeNameMap.Emplace(kFBSceneChangeMergeTransactionEnd,	"End merge transaction");
	SceneChangeNameMap.Emplace(kFBSceneChangeReSelect,				"Re-selection");
	SceneChangeNameMap.Emplace(kFBSceneChangeChangeName,			"Object change name");
	SceneChangeNameMap.Emplace(kFBSceneChangeChangedName,			"Object changed name");
	SceneChangeNameMap.Emplace(kFBSceneChangePreParent,				"Before object parenting");
	SceneChangeNameMap.Emplace(kFBSceneChangePreUnparent,			"Before object unparenting");
	SceneChangeNameMap.Emplace(kFBSceneChangeFocus,					"Object have focus");
	SceneChangeNameMap.Emplace(kFBSceneChangeChangedParent,			"Object changed parent");
	SceneChangeNameMap.Emplace(kFBSceneChangeReorder,				"Object reorder");
	SceneChangeNameMap.Emplace(kFBSceneChangeReordered,				"Object reordered");

	// Set sampling rate to 60 Hz
	FBTime	lPeriod;
	lPeriod.SetSecondDouble(1.0/60.0);
	SamplingPeriod	= lPeriod;

	StartLiveLink();
	FBSystem().Scene->OnChange.Add(this, (FBCallback)&MobuLiveLink::EventSceneChange);

	SetDirty(false);

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
 *	Real-Time Engine Evaluation.
 ************************************************/
//bool MobuLiveLink::AnimationNodeNotify(FBAnimationNode* pAnimationNode ,FBEvaluateInfo* pEvaluateInfo)
//{
//    return true;
//}

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
		bool bInScene = FBSystem().Scene->Components.Find((FBComponent*)MapPair.Value->RootModel) >= 0;
		if (bInScene)
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