// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "StreamStore.h"
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
	bool FBCreate() override;		//!< FiLMBOX constructor.
	void FBDestroy() override;		//!< FiLMBOX destructor.

	//--- Initialisation/Shutdown
	bool Init();		//!< Initialize/create device.
	bool Done();		//!< Remove device.
	bool Reset();		//!< Reset device.
	bool Stop();		//!< Stop device (offline).
	bool Start();		//!< Start device (online).

	//--- The following will be called by the real-time engine.
	//virtual bool AnimationNodeNotify(FBAnimationNode* AnimationNode, FBEvaluateInfo* EvaluateInfo);	//!< Real-time evaluation for node.
	void DeviceIONotify(kDeviceIOs  Action, FBDeviceNotifyInfo &DeviceNotifyInfo) override;	//!< Notification of/for Device IO.
	bool DeviceEvaluationNotify(kTransportMode Mode, FBEvaluateInfo* EvaluateInfo) override;	//!< Evaluation the device (write to hardware).
	bool DeviceOperation(kDeviceOperations Operation) override;	//!< Operate device.

	//--- FBX Load/Save.
	bool FbxStore(FBFbxObject* FbxObject, kFbxObjectStore StoreWhat) override;	//!< Store in FBX file.
	bool FbxRetrieve(FBFbxObject* FbxObject, kFbxObjectStore StoreWhat) override;	//!< Retrieve from FBX file.

public:
	const FString mProviderName = TEXT("Mobu Live Link");
	TMap<kReference, TSharedPtr<StreamObject>> StreamObjects;
	
	TSharedPtr<ILiveLinkProvider> LiveLinkProvider;

private:

	double SamplingRate;
	FBDeviceSamplingMode SamplingType;
	FBFastLock mCleanUpLock;

	

	void SetDeviceInformation(const char* NewDeviceInformation);
};

