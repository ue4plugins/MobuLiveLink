// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkLayout.h"
#include "MobuLiveLinkStreamObjects.h"
#include "MobuLiveLinkUtilities.h"
#include <regex>
#include <string>

#define MOBULIVELINK__LAYOUT	FMobuLiveLinkLayout

FBDeviceLayoutImplementation(MOBULIVELINK__LAYOUT);
FBRegisterDeviceLayout(MOBULIVELINK__LAYOUT,
	MOBULIVELINK__CLASSSTR,
	FB_DEFAULT_SDK_ICON);

const char MainLayoutName[] = "MainLayout";

// Removes all characters (in place) that are neither punctuation nor alphanumeric
void StripWhitespace(char* InStr)
{
	const size_t Length = strlen(InStr);
	if (Length == 0)
	{
		return;
	}

	size_t pos = 0;
	for (size_t i=0; i<Length; ++i)
	{
		if (isalnum(InStr[i]) || ispunct(InStr[i]))
		{
			InStr[pos++] = InStr[i];
		}
	}

	InStr[pos] = '\0';
}

bool IsValidIpAddressWithPort(const char* InIpAddress)
{
	// Regex explanation:
	// \s*										-> Allow any amount of leading whitespace
	// ([01]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])	-> Match single ip block, min 0, max 255
	// \\.										-> Match dot
	// {3}										-> Match 3 ip blocks with trailing dots
	// ([01]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])	-> Match last ip block w/o trailing dot
	// \\s*\\:\\s*								-> Match colon with any amount of surrounding whitespace
	// \\d{1,5}									-> Match any number between 1 and 5 digits for the port
	//
	// to verify/test: https://regex101.com/r/wdePf9/1
	std::regex IpRegex("^\\s*((([01]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])\\.){3}([01]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5]))\\s*\\:\\s*(\\d{1,5})$");
	return std::regex_match(InIpAddress, IpRegex);
}

bool FMobuLiveLinkLayout::FBCreate()
{
	FBTrace("Creating UI\n");

	// Get a handle on the device.
	LiveLinkDevice = (FMobuLiveLink*)(FBDevice*)Device;

	FBPropertyPublish(this, ObjectSelection, "ObjectSelection", nullptr, nullptr);
	ObjectSelection.SetFilter(FBModel::GetInternalClassId());
	ObjectSelection.SetSingleConnect(false);

	UICreate();
	UIConfigure();
	UIReset();

	System.OnUIIdle.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventUIIdle);
	return true;
}


void FMobuLiveLinkLayout::FBDestroy()
{
	// Remove device & system callbacks
	FBTrace("Destroying UI\n");

	System.OnUIIdle.Remove(this, (FBCallback)&FMobuLiveLinkLayout::EventUIIdle);
}

void FMobuLiveLinkLayout::UICreate()
{
	// default spacing, width, height in pixels
	const int S = 4;
	const int W = 110;
	const int H = 18;

	const char* TabLayoutName = "TabPanel";

	AddRegion(TabLayoutName, TabLayoutName,
		S, kFBAttachLeft, "", 1.0,
		S, kFBAttachTop, "", 1.0,
		-S, kFBAttachRight, "", 1.0,
		25, kFBAttachNone, NULL, 1.0);

	// Create regions
	AddRegion(MainLayoutName, MainLayoutName,
		0, kFBAttachLeft, TabLayoutName, 1.00,
		0, kFBAttachBottom, TabLayoutName, 1.00,
		0, kFBAttachRight, TabLayoutName, 1.00,
		-S, kFBAttachBottom, nullptr, 1.00);

	// Assign regions
	SetControl(TabLayoutName, TabPanel);
	SetControl(MainLayoutName, Layouts[0]);

	UICreateLayout0();
	UICreateLayout1();
}

void FMobuLiveLinkLayout::UICreateLayout0()
{
	const int S = 4;
	const int W = 110;
	const int H = 18;

	const char ObjectSelectorLabelName[] = "ObjectSelectorLabel";
	const char ObjectSelectorName[] = "ObjectSelector";
	const char AddToStreamButtonName[] = "AddToStreamButton";
	const char RemoveFromStreamButtonName[] = "RemoveFromStreamButton";
	const char StreamEditorCameraButtonName[] = "StreamEditorCameraButton";
	const char StreamSpreadName[] = "StreamSpread";

	{
		Layouts[0].AddRegion(ObjectSelectorLabelName, ObjectSelectorLabelName,
			S, kFBAttachLeft, nullptr, 1.00,
			S, kFBAttachTop, nullptr, 1.00,
			W * 0.85f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[0].AddRegion(ObjectSelectorName, ObjectSelectorName,
			0, kFBAttachRight, ObjectSelectorLabelName, 1.00,
			0, kFBAttachTop, ObjectSelectorLabelName, 1.00,
			W * 2.0f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[0].AddRegion(AddToStreamButtonName, AddToStreamButtonName,
			S, kFBAttachRight, ObjectSelectorName, 1.00,
			0, kFBAttachTop, ObjectSelectorName, 1.00,
			W * 0.75f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[0].AddRegion(RemoveFromStreamButtonName, RemoveFromStreamButtonName,
			S, kFBAttachRight, AddToStreamButtonName, 1.00,
			0, kFBAttachTop, AddToStreamButtonName, 1.00,
			W * 0.75f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[0].AddRegion(StreamEditorCameraButtonName, StreamEditorCameraButtonName,
			S * 4.0f, kFBAttachRight, RemoveFromStreamButtonName, 1.00,
			0, kFBAttachTop, RemoveFromStreamButtonName, 1.00,
			W * 1.35f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}

	{
		Layouts[0].AddRegion(StreamSpreadName, StreamSpreadName,
			S, kFBAttachLeft, nullptr, 1.00,
			S, kFBAttachBottom, ObjectSelectorLabelName, 1.00,
			-S, kFBAttachRight, nullptr, 1.00,
			-S, kFBAttachBottom, nullptr, 1.00);
	}

	Layouts[0].SetControl(ObjectSelectorLabelName, ObjectSelectorLabel);
	Layouts[0].SetControl(ObjectSelectorName, ObjectSelector);
	Layouts[0].SetControl(AddToStreamButtonName, AddToStreamButton);
	Layouts[0].SetControl(RemoveFromStreamButtonName, RemoveFromStreamButton);
	Layouts[0].SetControl(StreamEditorCameraButtonName, StreamEditorCameraButton);

	Layouts[0].SetControl(StreamSpreadName, StreamSpread);
}

void FMobuLiveLinkLayout::UICreateLayout1()
{
	const int S = 8;
	const int W = 110;
	const int H = 24;

	const char SampleRateLabelName[] = "SampleRateLabel";
	const char SampleRateListName[] = "SampleRateList";
	const char ProviderNameLabelName[] = "ProviderNameLabel";
	const char ProviderNameTextName[] = "ProviderNameText";
	const char ProviderNameEditButtonName[] = "ProviderNameEditButton";
	const char TimecodeModeListLabelName[] = "TimecodeModeListLabel";
	const char TimecodeModeListName[] = "TimecodeModeList";
	const char UnicastEndpointLabelName[] = "UnicastEndpointLabel";
	const char UnicastEndpointAddressName[] = "UnicastEndpointAddress";
	const char UnicastEndpointEditButtonName[] = "UnicastEndpointEditButton";
	const char StaticEndpointLabelName[] = "StaticEndpointLabel";
	const char StaticEndpointAddressName[] = "StaticEndpointAddress";
	const char StaticEndpointAddButtonName[] = "StaticEndpointAddButton";
	const char StaticEndpointRemoveButtonName[] = "StaticEndpointRemoveButton";

	{
		Layouts[1].AddRegion(SampleRateLabelName, SampleRateLabelName,
			S, kFBAttachLeft, nullptr, 1.00,
			S, kFBAttachTop, nullptr, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(SampleRateListName, SampleRateListName,
			S, kFBAttachRight, SampleRateLabelName, 1.00,
			0, kFBAttachTop, SampleRateLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}
	{
		Layouts[1].AddRegion(TimecodeModeListLabelName, TimecodeModeListLabelName,
			S, kFBAttachLeft, nullptr, 1.00,
			H, kFBAttachTop, SampleRateLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(TimecodeModeListName, TimecodeModeListName,
			S, kFBAttachRight, TimecodeModeListLabelName, 1.00,
			0, kFBAttachTop, TimecodeModeListLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}
	{
		Layouts[1].AddRegion(ProviderNameLabelName, ProviderNameLabelName,
			S, kFBAttachLeft, nullptr, 1.00,
			H, kFBAttachTop, TimecodeModeListLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(ProviderNameTextName, ProviderNameTextName,
			S, kFBAttachRight, ProviderNameLabelName, 1.00,
			0, kFBAttachTop, ProviderNameLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(ProviderNameEditButtonName, ProviderNameEditButtonName,
			S, kFBAttachRight, ProviderNameTextName, 1.00,
			0, kFBAttachTop, ProviderNameTextName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}
	{
		Layouts[1].AddRegion(UnicastEndpointLabelName, UnicastEndpointLabelName,
			S, kFBAttachLeft, nullptr, 1.00,
			H, kFBAttachTop, ProviderNameLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(UnicastEndpointAddressName, UnicastEndpointAddressName,
			S, kFBAttachRight, UnicastEndpointLabelName, 1.00,
			0, kFBAttachTop, UnicastEndpointLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(UnicastEndpointEditButtonName, UnicastEndpointEditButtonName,
			S, kFBAttachRight, UnicastEndpointAddressName, 1.00,
			0, kFBAttachTop, UnicastEndpointAddressName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}
	{
		Layouts[1].AddRegion(StaticEndpointLabelName, StaticEndpointLabelName,
			S, kFBAttachLeft, nullptr, 1.00,
			H, kFBAttachTop, UnicastEndpointLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(StaticEndpointAddressName, StaticEndpointAddressName,
			S, kFBAttachRight, StaticEndpointLabelName, 1.00,
			0, kFBAttachTop, StaticEndpointLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H * 3, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(StaticEndpointAddButtonName, StaticEndpointAddButtonName,
			S, kFBAttachRight, StaticEndpointAddressName, 1.00,
			0, kFBAttachTop, StaticEndpointAddressName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		Layouts[1].AddRegion(StaticEndpointRemoveButtonName, StaticEndpointRemoveButtonName,
			S, kFBAttachRight, StaticEndpointAddressName, 1.00,
			H, kFBAttachTop, StaticEndpointAddButtonName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}

	Layouts[1].SetControl(SampleRateLabelName, SampleRateListLabel);
	Layouts[1].SetControl(SampleRateListName, SampleRateList);
	Layouts[1].SetControl(TimecodeModeListLabelName, TimecodeModeListLabel);
	Layouts[1].SetControl(TimecodeModeListName, TimecodeModeList);
	Layouts[1].SetControl(ProviderNameLabelName, ProviderNameLabel);
	Layouts[1].SetControl(ProviderNameTextName, ProviderNameText);
	Layouts[1].SetControl(ProviderNameEditButtonName, ProviderNameEditButton);
	Layouts[1].SetControl(UnicastEndpointLabelName, UnicastEndpointLabel);
	Layouts[1].SetControl(UnicastEndpointAddressName, UnicastEndpoint);
	Layouts[1].SetControl(UnicastEndpointEditButtonName, UnicastEndpointEditButton);
	Layouts[1].SetControl(StaticEndpointLabelName, StaticEndpointLabel);
	Layouts[1].SetControl(StaticEndpointAddressName, StaticEndpoints);
	Layouts[1].SetControl(StaticEndpointAddButtonName, StaticEndpointAddButton);
	Layouts[1].SetControl(StaticEndpointRemoveButtonName, StaticEndpointRemoveButton);
}

void FMobuLiveLinkLayout::CreateSpreadColumns()
{
	int W = 100;

	StreamSpread.ColumnAdd("Subject Name", 0);

	StreamSpread.ColumnAdd("Stream Type", 1);
	StreamSpread.GetColumn(1).Style = kFBCellStyleMenu;
	StreamSpread.GetColumn(1).Width = W * 1.2f;

	StreamSpread.ColumnAdd("Active", 2);
	StreamSpread.GetColumn(2).Style = kFBCellStyle2StatesButton;
	StreamSpread.GetColumn(2).Width = W * 0.5f;

	StreamSpread.ColumnAdd("Stream Animatable", 3);
	StreamSpread.GetColumn(3).Style = kFBCellStyle2StatesButton;
	StreamSpread.GetColumn(3).Width = W;
}

void FMobuLiveLinkLayout::UIConfigure()
{
	TabPanel.Items.SetString("Stream~Settings");
	TabPanel.OnChange.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventTabPanelChange);

	SetBorder("MainLayout", kFBStandardBorder, false, true, 1, 0, 90, 0);

	UIConfigureLayout0();
	UIConfigureLayout1();
}

void FMobuLiveLinkLayout::UIConfigureLayout0()
{
	ObjectSelector.Property = &ObjectSelection;

	ObjectSelectorLabel.Caption = "Subject Selector:";

	AddToStreamButton.Caption = "Add";
	AddToStreamButton.Justify = kFBTextJustifyCenter;
	AddToStreamButton.OnClick.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventAddToStream);

	RemoveFromStreamButton.Caption = "Remove";
	RemoveFromStreamButton.Justify = kFBTextJustifyCenter;
	RemoveFromStreamButton.OnClick.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventRemoveFromStream);

	StreamEditorCameraButton.Caption = "Stream Viewport Camera";
	StreamEditorCameraButton.Style = kFBCheckbox;
	StreamEditorCameraButton.State = LiveLinkDevice->IsEditorCameraStreamed();
	StreamEditorCameraButton.OnClick.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventStreamEditorCamera);

	StreamSpread.Caption = "Object Root";
	StreamSpread.MultiSelect = true;

	CreateSpreadColumns();

	StreamSpread.OnCellChange.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventStreamSpreadCellChange);
}

void FMobuLiveLinkLayout::UIConfigureLayout1()
{
	{
		TimecodeModeList.Items.Add("Local");
		TimecodeModeList.Items.Add("System");
		TimecodeModeList.Items.Add("Reference");
		TimecodeModeList.ItemIndex = LiveLinkDevice->GetTimecodeModeAsInt();
		TimecodeModeList.OnChange.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventTimecodeModeChanged);
		TimecodeModeListLabel.Caption = "Timecode:";
	}

	int CurrentSampleIndex = 0;
	for (int SampleOptionIdx = 0; SampleOptionIdx < LiveLinkDevice->SampleOptions.Num(); ++SampleOptionIdx)
	{
		const TPair<FString, FFrameRate>& SampleOption = LiveLinkDevice->SampleOptions[SampleOptionIdx];
		SampleRateList.Items.Add(FStringToChar(SampleOption.Key));
		if (SampleOption.Value == LiveLinkDevice->CurrentSampleRate)
		{
			CurrentSampleIndex = SampleOptionIdx;
		}
	}
	SampleRateList.ItemIndex = CurrentSampleIndex;

	SampleRateList.OnChange.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventSampleRateChange);

	SampleRateListLabel.Caption = "Sample Rate:";
	ProviderNameLabel.Caption = "Provider Name:";

	ProviderNameText.Text = FStringToChar(LiveLinkDevice->GetProviderName());
	ProviderNameText.ReadOnly = true;

	ProviderNameEditButton.Caption = "Change";
	ProviderNameEditButton.OnClick.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventEditProviderNamePopup);

	UnicastEndpointLabel.Caption = "Unicast Endpoint:";
	UnicastEndpoint.Text = FStringToChar(LiveLinkDevice->GetUnicastEndpoint());
	UnicastEndpoint.ReadOnly = true;
	UnicastEndpointEditButton.Caption = "Change";
	UnicastEndpointEditButton.OnClick.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventChangeUnicastEndpoint);

	StaticEndpointLabel.Caption = "Static Endpoints:";
	StaticEndpoints.Style = kFBVerticalList;

	StaticEndpointAddButton.Caption = "Add";
	StaticEndpointAddButton.OnClick.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventAddStaticEndpoint);

	StaticEndpointRemoveButton.Caption = "Remove";
	StaticEndpointRemoveButton.OnClick.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventRemoveStaticEndpoint);
}

void FMobuLiveLinkLayout::UIReset()
{
	FBTrace("UI Reset!\n");
	StreamSpread.Clear();
	CreateSpreadColumns();
	for (const TPair<int32, StreamObjectPtr>& MapPair : LiveLinkDevice->StreamObjects)
	{
		AddSpreadRowFromStreamObject(MapPair.Key, MapPair.Value);
	}
	
	UnicastEndpoint.Text = FStringToChar(LiveLinkDevice->GetUnicastEndpoint());
	StaticEndpoints.Items.Clear();
	const TArray<FString>& Endpoints = LiveLinkDevice->GetStaticEndpoints();
	for (const FString& Endpoint : Endpoints)
	{
		StaticEndpoints.Items.Add(FStringToChar(Endpoint));
	}

	LiveLinkDevice->SetRefreshUI(false);
}

void FMobuLiveLinkLayout::EventUIIdle(HISender Sender, HKEvent Event)
{
	if (LiveLinkDevice->IsDirty())
	{
		LiveLinkDevice->UpdateStreamObjects();
	}
	if (LiveLinkDevice->ShouldRefreshUI())
	{
		UIReset();
	}
}

void FMobuLiveLinkLayout::AddSpreadRowFromStreamObject(int32 NewRowKey, StreamObjectPtr Object)
{
	// Check whether the Object should be shown
	if (!Object->ShouldShowInUI()) return;

	const FString RootName = Object->GetRootName();

	StreamSpread.RowAdd(FStringToChar(RootName), NewRowKey);

	StreamSpread.SetCell(NewRowKey, 0, FStringToChar(Object->GetSubjectName().ToString()));
	StreamSpread.SetCell(NewRowKey, 1, FStringToChar(Object->GetStreamOptions()));
	StreamSpread.SetCell(NewRowKey, 1, Object->GetStreamingMode());
	StreamSpread.SetCell(NewRowKey, 2, Object->GetActiveStatus());
	StreamSpread.SetCell(NewRowKey, 3, Object->GetSendAnimatableStatus());
}


bool IsModelInDeviceStream(const FMobuLiveLink* MobuDevice, const FBModel* Model)
{
	for (const TPair<int32, TSharedPtr<IStreamObject>>& StreamPair : MobuDevice->StreamObjects)
	{
		if (StreamPair.Value->GetModelPointer() == Model)
		{
			return true;
		}
	}
	return false;
}

void FMobuLiveLinkLayout::EventAddToStream(HISender Sender, HKEvent Event)
{
	TArray<FBModel*> ParentsToIgnore;
	ParentsToIgnore.Reserve(ObjectSelection.GetCount());

	FBModel* SceneRoot = FBSystem().Scene->RootModel;
	for (int CharIndex = 0; CharIndex < ObjectSelection.GetCount(); ++CharIndex)
	{
		FBModel* Model = (FBModel*)ObjectSelection.GetAt(CharIndex);

		// Ignore the SceneRoot
		if (Model == SceneRoot)
		{
			continue;
		}

		// Only grab root items
		if (ParentsToIgnore.Contains(Model->Parent))
		{
			ParentsToIgnore.Emplace(Model);
		}
		else if (!IsModelInDeviceStream(LiveLinkDevice, Model))
		{
			StreamObjectPtr StoreObject = StreamObjectManagement::FBModelToStreamObject(Model);
			int32 NewUID = LiveLinkDevice->GetNextUID();

			LiveLinkDevice->AddStreamObject(NewUID, StoreObject);
			AddSpreadRowFromStreamObject(NewUID, StoreObject);

			ParentsToIgnore.Emplace(Model);
		}
	}
	ObjectSelection.Clear();
}

void FMobuLiveLinkLayout::EventRemoveFromStream(HISender Sender, HKEvent Event)
{
	int SelectedCount = 0;

	decltype(LiveLinkDevice->StreamObjects) StreamObjectsToRemove;

	for (const TPair<int32, StreamObjectPtr>& MapPair : LiveLinkDevice->StreamObjects)
	{
		int32 RowKey = MapPair.Key;
		bool bRowSelected = StreamSpread.GetRow(RowKey).RowSelected;
		if (bRowSelected)
		{
			StreamObjectsToRemove.Add(MapPair);
			SelectedCount++;
		}
	}

	for (const auto& MapPair : StreamObjectsToRemove)
	{
		LiveLinkDevice->RemoveStreamObject(MapPair.Key, MapPair.Value);
	}

	if (SelectedCount > 0)
	{
		UIReset();
	}

	FBTrace("Removed %d items in selection!\n", SelectedCount);
}

void FMobuLiveLinkLayout::EventStreamEditorCamera(HISender Sender, HKEvent Event)
{
	LiveLinkDevice->SetEditorCameraStreamed((bool)StreamEditorCameraButton.State);
}

void FMobuLiveLinkLayout::EventStreamSpreadCellChange(HISender Sender, HKEvent Event)
{
	FBEventSpread SpreadEvent = Event;

	StreamObjectPtr* ObjectPtr = LiveLinkDevice->StreamObjects.Find(SpreadEvent.Row);
	if (ObjectPtr == nullptr && ObjectPtr->IsValid())
	{
		FBTrace("No object exists for this Row!");
		return;
	}
	switch (SpreadEvent.Column)
	{
	case 0: // Subject Name
	{
		const char* NewSubjectName;
		StreamSpread.GetCell(SpreadEvent.Row, SpreadEvent.Column, NewSubjectName);
		LiveLinkDevice->ChangeSubjectName(*ObjectPtr, NewSubjectName);
		break;
	}
	case 1: // Stream Type
	{
		int RowIndex;
		StreamSpread.GetCell(SpreadEvent.Row, SpreadEvent.Column, RowIndex);
		(*ObjectPtr)->UpdateStreamingMode(RowIndex);
		break;
	}
	case 2: // Stream Status
	{
		int bIsActive;
		StreamSpread.GetCell(SpreadEvent.Row, SpreadEvent.Column, bIsActive);
		(*ObjectPtr)->UpdateActiveStatus(bIsActive > 0);
		break;
	}
	case 3: // Stream Animatable
	{
		int bIsAnimatable;
		StreamSpread.GetCell(SpreadEvent.Row, SpreadEvent.Column, bIsAnimatable);
		(*ObjectPtr)->UpdateSendAnimatableStatus(bIsAnimatable > 0);
		break;
	}
	default:
		break;
	}

	LiveLinkDevice->SetDirty(true);
}

void FMobuLiveLinkLayout::EventTabPanelChange(HISender pSender, HKEvent pEvent)
{
	switch (TabPanel.ItemIndex)
	{
		case 0:
			SetControl("MainLayout", Layouts[0]);
		break;
		case 1:
			SetControl("MainLayout", Layouts[1]);
		break;
	}
}

void FMobuLiveLinkLayout::EventTimecodeModeChanged(HISender Sender, HKEvent Event)
{
	LiveLinkDevice->SetTimecodeModeFromInt(TimecodeModeList.ItemIndex);
}

void FMobuLiveLinkLayout::EventSampleRateChange(HISender Sender, HKEvent Event)
{
	const FFrameRate& NewSampleRate = LiveLinkDevice->SampleOptions[SampleRateList.ItemIndex].Value;
	if (NewSampleRate != LiveLinkDevice->CurrentSampleRate)
	{
		LiveLinkDevice->CurrentSampleRate = NewSampleRate;
		LiveLinkDevice->UpdateSampleRate();
	}
}

void FMobuLiveLinkLayout::EventEditProviderNamePopup(HISender Sender, HKEvent Event)
{
	char NewNameString[1024];
	memset(NewNameString, 0, sizeof(NewNameString));
	strncpy_s(NewNameString, sizeof(NewNameString) - 1, ProviderNameText.Text, sizeof(ProviderNameText.Text));

	// This is scary with no buffer overrun safety on the Mobu SDK side
	int ButtonClicked = FBMessageBoxGetUserValue("Change Provider Name", "Enter a new Live Link Provider name", NewNameString, kFBPopupString, "Accept", "Cancel");

	if ((ButtonClicked == 1) && (strlen(NewNameString) > 0) && (LiveLinkDevice->GetProviderName() != CharToFString(NewNameString)))
	{
		ProviderNameText.Text = NewNameString;
		LiveLinkDevice->SetProviderName(CharToFString(NewNameString));
	}
}

void FMobuLiveLinkLayout::EventChangeUnicastEndpoint(HISender Sender, HKEvent Event)
{
	char NewUnicastString[1024];
	memset(NewUnicastString, 0, sizeof(NewUnicastString));
	strncpy_s(NewUnicastString, sizeof(NewUnicastString) - 1, UnicastEndpoint.Text, sizeof(UnicastEndpoint.Text));

	const std::string Description("Enter a new Unicast Endpoint address to select which nic to use.");
	const std::string FormatHint("\n\nThe entered address was not formatted correctly. The format must match this pattern:\nIpAddress:Port");
	int ButtonClicked = 0;
	bool bTryAgain = false;

	do
	{
		std::string Message(Description);
		if (bTryAgain)
		{
			Message += FormatHint;
		}

		// This is scary with no buffer overrun safety on the Mobu SDK side
		ButtonClicked = FBMessageBoxGetUserValue("Change Unicast Endpoint", Message.c_str(), NewUnicastString, kFBPopupString, "Accept", "Cancel");
		StripWhitespace(NewUnicastString);
		bTryAgain = (ButtonClicked == 1) && !IsValidIpAddressWithPort(NewUnicastString);
	} while (bTryAgain);

	if ((ButtonClicked == 1) && (strlen(NewUnicastString) > 0) && (LiveLinkDevice->GetUnicastEndpoint() != CharToFString(NewUnicastString)))
	{
		UnicastEndpoint.Text = NewUnicastString;
		LiveLinkDevice->SetUnicastEndpoint(CharToFString(NewUnicastString));
	}
}

void FMobuLiveLinkLayout::EventAddStaticEndpoint(HISender Sender, HKEvent Event)
{
	char NewAddressString[1024] = "0.0.0.0:6666";

	const std::string Description("Enter a new Static Endpoint Address of the PC running Unreal Engine.");
	const std::string FormatHint("\n\nThe entered address was not formatted correctly. The format must match this pattern:\nIpAddress:Port");
	int ButtonClicked = 0;
	bool bTryAgain = false;

	do
	{
		std::string Message(Description);
		if (bTryAgain)
		{
			Message += FormatHint;
		}
		// This is scary with no buffer overrun safety on the Mobu SDK side
		ButtonClicked = FBMessageBoxGetUserValue("Add StaticEndpoint", Message.c_str(), NewAddressString, kFBPopupString, "Accept", "Cancel");
		StripWhitespace(NewAddressString);
		bTryAgain = (ButtonClicked == 1) && !IsValidIpAddressWithPort(NewAddressString);
	} while (bTryAgain);

	if ((ButtonClicked == 1) && (strlen(NewAddressString) > 0))
	{
		const int ExistingIndex = StaticEndpoints.Items.IndexOf(NewAddressString);
		if (ExistingIndex == -1) // avoid duplicates
		{
			StaticEndpoints.Items.Add(NewAddressString);
			if (!LiveLinkDevice->AddStaticEndpoint(CharToFString(NewAddressString)))
			{
				FBMessageBox("Error", "Could not add Static Endpoint!", "OK");
			}
		}
	}
}

void FMobuLiveLinkLayout::EventRemoveStaticEndpoint(HISender Sender, HKEvent Event)
{
	if (StaticEndpoints.ItemIndex == -1)
	{
		return;
	}

	if (!LiveLinkDevice->RemoveStaticEndpoint(StaticEndpoints.Items[StaticEndpoints.ItemIndex]))
	{
		FBMessageBox("Error", "Could not remove Static Endpoint!", "OK");
	}
	else
	{
		StaticEndpoints.Items.RemoveAt(StaticEndpoints.ItemIndex);
	}
}
