//--- Class declaration
#include "MobuLiveLinkDevice.h"



TSharedPtr<ILiveLinkProvider> LiveLinkProvider;


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
							FB_DEFAULT_SDK_ICON		);	// Icon filename (default=Open Reality icon)

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
	FBTime	lPeriod;
	lPeriod.SetSecondDouble(1.0/60.0);
	SamplingPeriod	= lPeriod;

	return true;
}


/************************************************
 *	FiLMBOX Destructor.
 ************************************************/
void MobuLiveLink::FBDestroy()
{
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

	StartLiveLink();

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

	StopLiveLink();

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
bool MobuLiveLink::AnimationNodeNotify(FBAnimationNode* pAnimationNode ,FBEvaluateInfo* pEvaluateInfo)
{
    return true;
}

/************************************************
 *	Device Evaluation Notify.
 ************************************************/
bool MobuLiveLink::DeviceEvaluationNotify(kTransportMode pMode, FBEvaluateInfo* pEvaluateInfo)
{
	ScopedFastLock scoped_lock(mCleanUpLock);
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
}


void MobuLiveLink::StopLiveLink()
{
	if (LiveLinkProvider.IsValid())
	{
		LiveLinkProvider = nullptr;
	}
}