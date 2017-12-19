// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CommandLine.h"
#include "TaskGraphInterfaces.h"
#include "ModuleManager.h"
#include "Object.h"
#include "ConfigCacheIni.h"

#include "LiveLinkProvider.h"
#include "LiveLinkRefSkeleton.h"
#include "OutputDevice.h"

#pragma warning(push)
#pragma warning(disable:4263 4264)
#include <fbsdk/fbsdk.h>
#pragma warning(pop)

//--- Registration defines
#define MOBULIVELINK__CLASSNAME		MobuLiveLink
#define MOBULIVELINK__CLASSSTR		"MobuLiveLink"

//! Simple input device.
class MobuLiveLink : public FBDevice
{
	//--- FiLMBOX declaration
	FBDeviceDeclare(MobuLiveLink, FBDevice);

public:
	void StartLiveLink();
	void StopLiveLink();

	//--- FiLMBOX Construction/Destruction
	virtual bool FBCreate();		//!< FiLMBOX constructor.
	virtual void FBDestroy();		//!< FiLMBOX destructor.

	//--- Initialisation/Shutdown
	bool Init();		//!< Initialize/create device.
	bool Done();		//!< Remove device.
	bool Reset();		//!< Reset device.
	bool Stop();		//!< Stop device (offline).
	bool Start();		//!< Start device (online).

	//--- The following will be called by the real-time engine.
	//virtual bool AnimationNodeNotify(FBAnimationNode* AnimationNode, FBEvaluateInfo* EvaluateInfo);	//!< Real-time evaluation for node.
	virtual void DeviceIONotify(kDeviceIOs  Action, FBDeviceNotifyInfo &DeviceNotifyInfo);	//!< Notification of/for Device IO.
	virtual bool DeviceEvaluationNotify(kTransportMode Mode, FBEvaluateInfo* EvaluateInfo);	//!< Evaluation the device (write to hardware).
	virtual bool DeviceOperation(kDeviceOperations Operation);	//!< Operate device.

	//--- FBX Load/Save.
	virtual bool FbxStore(FBFbxObject* FbxObject, kFbxObjectStore StoreWhat);	//!< Store in FBX file.
	virtual bool FbxRetrieve(FBFbxObject* FbxObject, kFbxObjectStore StoreWhat);	//!< Retrieve from FBX file.

public:
	const FString mProviderName = TEXT("Mobu Live Link");

private:

	double SamplingRate;
	FBDeviceSamplingMode SamplingType;
	FBFastLock mCleanUpLock;

	void SetDeviceInformation(const char* NewDeviceInformation);
};

