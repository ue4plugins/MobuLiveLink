// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkLayout.h"
#include "MobuLiveLinkStreamObjects.h"
#include "MobuLiveLinkUtilities.h"
#include <string>

#define MOBULIVELINK__LAYOUT	FMobuLiveLinkLayout

FBDeviceLayoutImplementation(MOBULIVELINK__LAYOUT);
FBRegisterDeviceLayout(MOBULIVELINK__LAYOUT,
	MOBULIVELINK__CLASSSTR,
	FB_DEFAULT_SDK_ICON);


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
	int S, W, H;		// default spacing, width, height in pixels

	S = 4;
	W = 110;
	H = 18;

	const char MainLayoutName[] = "MainLayout";
	const char ObjectSelectorLabelName[] = "ObjectSelectorLabel";
	const char ObjectSelectorName[] = "ObjectSelector";
	const char AddToStreamButtonName[] = "AddToStreamButton";
	const char RemoveFromStreamButtonName[] = "RemoveFromStreamButton";
	const char StreamEditorCameraButtonName[] = "StreamEditorCameraButton";
	const char TimecodeModeListLabelName[] = "TimecodeModeListLabel";
	const char TimecodeModeListName[] = "TimecodeModeList";
	const char SampleRateLabelName[] = "SampleRateLabel";
	const char SampleRateListName[] = "SampleRateList";
	const char ProviderNameLabelName[] = "ProviderNameLabel";
	const char ProviderNameTextName[] = "ProviderNameText";
	const char ProviderNameEditButtonName[] = "ProviderNameEditButton";
	const char StreamSpreadName[] = "StreamSpread";

	// Create regions
	AddRegion(MainLayoutName, MainLayoutName,
		S, kFBAttachLeft, nullptr, 1.00,
		S, kFBAttachTop, nullptr, 1.00,
		-S, kFBAttachRight, nullptr, 1.00,
		-S, kFBAttachBottom, nullptr, 1.00);

	// Assign regions
	SetControl(MainLayoutName, StreamLayout);

	// Add regions
	{
		StreamLayout.AddRegion(SampleRateLabelName, SampleRateLabelName,
			S, kFBAttachLeft, nullptr, 1.00,
			S, kFBAttachTop, nullptr, 1.00,
			W * 0.65f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(SampleRateListName, SampleRateListName,
			0, kFBAttachRight, SampleRateLabelName, 1.00,
			0, kFBAttachTop, SampleRateLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
			
		StreamLayout.AddRegion(TimecodeModeListLabelName, TimecodeModeListLabelName,
			10, kFBAttachRight, SampleRateListName, 1.00,
			0, kFBAttachTop, SampleRateListName, 1.00,
			50, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(TimecodeModeListName, TimecodeModeListName,
			S, kFBAttachRight, TimecodeModeListLabelName, 1.00,
			0, kFBAttachTop, TimecodeModeListLabelName, 1.00,
			80, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(ProviderNameLabelName, ProviderNameLabelName,
			S * 4.0f, kFBAttachRight, TimecodeModeListName, 1.00,
			0, kFBAttachTop, TimecodeModeListName, 1.00,
			W * 0.75f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(ProviderNameTextName, ProviderNameTextName,
			0, kFBAttachRight, ProviderNameLabelName, 1.00,
			0, kFBAttachTop, ProviderNameLabelName, 1.00,
			W * 2.0f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(ProviderNameEditButtonName, ProviderNameEditButtonName,
			S, kFBAttachRight, ProviderNameTextName, 1.00,
			0, kFBAttachTop, ProviderNameTextName, 1.00,
			W * 0.75f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}

	{
		StreamLayout.AddRegion(ObjectSelectorLabelName, ObjectSelectorLabelName,
			S, kFBAttachLeft, nullptr, 1.00,
			S, kFBAttachBottom, SampleRateLabelName, 1.00,
			W * 0.85f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(ObjectSelectorName, ObjectSelectorName,
			0, kFBAttachRight, ObjectSelectorLabelName, 1.00,
			0, kFBAttachTop, ObjectSelectorLabelName, 1.00,
			W * 2.0f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(AddToStreamButtonName, AddToStreamButtonName,
			S, kFBAttachRight, ObjectSelectorName, 1.00,
			0, kFBAttachTop, ObjectSelectorName, 1.00,
			W * 0.75f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(RemoveFromStreamButtonName, RemoveFromStreamButtonName,
			S, kFBAttachRight, AddToStreamButtonName, 1.00,
			0, kFBAttachTop, AddToStreamButtonName, 1.00,
			W * 0.75f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(StreamEditorCameraButtonName, StreamEditorCameraButtonName,
			S * 4.0f, kFBAttachRight, RemoveFromStreamButtonName, 1.00,
			0, kFBAttachTop, RemoveFromStreamButtonName, 1.00,
			W * 1.35f, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}

	{
		StreamLayout.AddRegion(StreamSpreadName, StreamSpreadName,
			S, kFBAttachLeft, nullptr, 1.00,
			S, kFBAttachBottom, ObjectSelectorLabelName, 1.00,
			-S, kFBAttachRight, nullptr, 1.00,
			-S, kFBAttachBottom, nullptr, 1.00);
	}

	StreamLayout.SetControl(SampleRateLabelName, SampleRateListLabel);
	StreamLayout.SetControl(SampleRateListName, SampleRateList);
	StreamLayout.SetControl(TimecodeModeListLabelName, TimecodeModeListLabel);
	StreamLayout.SetControl(TimecodeModeListName, TimecodeModeList);
	StreamLayout.SetControl(ProviderNameLabelName, ProviderNameLabel);
	StreamLayout.SetControl(ProviderNameTextName, ProviderNameText);
	StreamLayout.SetControl(ProviderNameEditButtonName, ProviderNameEditButton);

	StreamLayout.SetControl(ObjectSelectorLabelName, ObjectSelectorLabel);
	StreamLayout.SetControl(ObjectSelectorName, ObjectSelector);
	StreamLayout.SetControl(AddToStreamButtonName, AddToStreamButton);
	StreamLayout.SetControl(RemoveFromStreamButtonName, RemoveFromStreamButton);
	StreamLayout.SetControl(StreamEditorCameraButtonName, StreamEditorCameraButton);

	StreamLayout.SetControl(StreamSpreadName, StreamSpread);
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
	SetBorder("MainLayout", kFBStandardBorder, false, true, 1, 0, 90, 0);

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

	{
		TimecodeModeList.Items.Add("Local");
		TimecodeModeList.Items.Add("System");
		TimecodeModeList.Items.Add("Reference");
		TimecodeModeList.ItemIndex = LiveLinkDevice->GetTimecodeModeAsInt();
		TimecodeModeList.OnChange.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventTimecodeModeChanged);
		TimecodeModeListLabel.Caption = "Timecode:";
	}

	StreamSpread.Caption = "Object Root";
	StreamSpread.MultiSelect = true;

	CreateSpreadColumns();

	StreamSpread.OnCellChange.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventStreamSpreadCellChange);

	int CurrentSampleIndex = 0;
	for (int SampleOptionIdx=0; SampleOptionIdx < LiveLinkDevice->SampleOptions.Num(); ++SampleOptionIdx)
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
	for (const TPair<int32, StreamObjectPtr>& MapPair : LiveLinkDevice->StreamObjects)
	{
		int32 RowKey = MapPair.Key;
		bool bRowSelected = StreamSpread.GetRow(RowKey).RowSelected;
		if (bRowSelected)
		{
			LiveLinkDevice->RemoveStreamObject(RowKey, MapPair.Value);
			SelectedCount++;
		}
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
