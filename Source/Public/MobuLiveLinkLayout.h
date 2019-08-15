// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include <string>
#include "MobuLiveLinkDevice.h"


class FMobuLiveLinkLayout : public FBDeviceLayout
{
	FBDeviceLayoutDeclare(FMobuLiveLinkLayout, FBDeviceLayout);
	
public:
	bool FBCreate() override;
	void FBDestroy() override;

	// UI Management
	void UICreate();
	void UIConfigure();
	void UIReset();
	void CreateSpreadColumns();

	// Main Layout: Events
	void EventUIIdle(HISender Sender, HKEvent Event);
	void EventAddToStream(HISender Sender, HKEvent Event);
	void EventRemoveFromStream(HISender Sender, HKEvent Event);
	void EventStreamEditorCamera(HISender Sender, HKEvent Event);
	void EventStreamSpreadCellChange(HISender Sender, HKEvent Event);
	void EventSampleRateChange(HISender Sender, HKEvent Event);
	void EventProviderNameChanged(HISender Sender, HKEvent Event);

public:

	FBLayout					StreamLayout;

	FBPropertyConnectionEditor	ObjectSelector;
	FBButton					AddToStreamButton;
	FBButton					RemoveFromStreamButton;
	FBButton					StreamEditorCameraButton;
	FBLabel						SampleRateListLabel;
	FBList						SampleRateList;
	FBLabel						ProviderNameLabel;
	FBEdit						ProviderNameEdit;
	FBSpread					StreamSpread;

private:

	typedef TSharedPtr<IStreamObject> StreamObjectPtr;

	void AddSpreadRowFromStreamObject(int32 NewRowKey, StreamObjectPtr Object);

	FBSystem				System;
	FMobuLiveLink*			LiveLinkDevice;

	FBPropertyListObject ObjectSelection;
};