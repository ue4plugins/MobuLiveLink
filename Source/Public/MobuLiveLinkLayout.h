// Copyright Epic Games, Inc. All Rights Reserved.

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
	void EventTimecodeModeChanged(HISender Sender, HKEvent Event);
	void EventSampleRateChange(HISender Sender, HKEvent Event);
	void EventEditProviderNamePopup(HISender Sender, HKEvent Event);

public:

	FBLayout					StreamLayout;

	FBLabel						ObjectSelectorLabel;
	FBPropertyConnectionEditor	ObjectSelector;
	FBButton					AddToStreamButton;
	FBButton					RemoveFromStreamButton;
	FBButton					StreamEditorCameraButton;
	FBList						TimecodeModeList;
	FBLabel						TimecodeModeListLabel;
	FBLabel						SampleRateListLabel;
	FBList						SampleRateList;
	FBLabel						ProviderNameLabel;
	FBEdit						ProviderNameText;
	FBButton					ProviderNameEditButton;
	FBSpread					StreamSpread;

private:
	typedef TSharedPtr<IStreamObject> StreamObjectPtr;

	void AddSpreadRowFromStreamObject(int32 NewRowKey, StreamObjectPtr Object);

	FBSystem				System;
	FMobuLiveLink*			LiveLinkDevice;

	FBPropertyListObject ObjectSelection;
};