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
	void UICreateLayout0();
	void UICreateLayout1();
	void UIConfigure();
	void UIConfigureLayout0();
	void UIConfigureLayout1();
	void UIReset();
	void CreateSpreadColumns();

	// Main Layout: Events
	void EventUIIdle(HISender Sender, HKEvent Event);
	void EventAddToStream(HISender Sender, HKEvent Event);
	void EventRemoveFromStream(HISender Sender, HKEvent Event);
	void EventStreamEditorCamera(HISender Sender, HKEvent Event);
	void EventStreamSpreadCellChange(HISender Sender, HKEvent Event);
	void EventTabPanelChange(HISender pSender, HKEvent pEvent);
	void EventTimecodeModeChanged(HISender Sender, HKEvent Event);
	void EventSampleRateChange(HISender Sender, HKEvent Event);
	void EventEditProviderNamePopup(HISender Sender, HKEvent Event);
	void EventChangeUnicastEndpoint(HISender Sender, HKEvent Event);
	void EventAddStaticEndpoint(HISender Sender, HKEvent Event);
	void EventRemoveStaticEndpoint(HISender Sender, HKEvent Event);

public:

	FBTabPanel					TabPanel;
	FBLayout					Layouts[2];

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
	FBLabel						UnicastEndpointLabel;
	FBEdit						UnicastEndpoint;
	FBButton					UnicastEndpointEditButton;
	FBLabel						StaticEndpointLabel;
	FBList						StaticEndpoints;
	FBButton					StaticEndpointAddButton;
	FBButton					StaticEndpointRemoveButton;

private:
	typedef TSharedPtr<IStreamObject> StreamObjectPtr;

	void AddSpreadRowFromStreamObject(int32 NewRowKey, StreamObjectPtr Object);

	FBSystem				System;
	FMobuLiveLink*			LiveLinkDevice;

	FBPropertyListObject ObjectSelection;
};