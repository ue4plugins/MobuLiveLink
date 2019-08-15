// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkLayout.h"
#include "MobuLiveLinkStreamObjects.h"
#include "MobuLiveLinkUtilities.h"
#include <string>

#define MOBULIVELINK__LAYOUT	FMobuLiveLinkLayout

FBDeviceLayoutImplementation(MOBULIVELINK__LAYOUT);
FBRegisterDeviceLayout(MOBULIVELINK__LAYOUT,
	MOBULIVELINK__CLASSSTR,
	FB_DEFAULT_SDK_ICON);


#define BoolToActiveText(input) (input ? "Active" : "Inactive")
#define BoolToSendAnimatableText(input) (input ? "Stream" : "Inactive")

bool FMobuLiveLinkLayout::FBCreate()
{
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
	FBTrace("Destroying\n");

	System.OnUIIdle.Remove(this, (FBCallback)&FMobuLiveLinkLayout::EventUIIdle);
}

void FMobuLiveLinkLayout::UICreate()
{
	int S, W, H;		// space, height
	S = 4;
	H = 25;

	const char MainLayoutName[] = "MainLayout";
	const char ObjectSelectorName[] = "ObjectSelector";
	const char AddToStreamButtonName[] = "AddToStreamButton";
	const char RemoveFromStreamButtonName[] = "RemoveFromStreamButton";
	const char StreamEditorCameraButtonName[] = "StreamEditorCameraButton";
	const char SampleRateLabelName[] = "SampleRateLabel";
	const char SampleRateListName[] = "SampleRateList";
	const char ProviderNameEditName[] = "ProviderNameEdit";
	const char ProviderNameLabelName[] = "ProviderNameLabel";
	const char StreamSpreadName[] = "StreamSpread";

	// Create regions
	AddRegion(MainLayoutName, MainLayoutName,
		S, kFBAttachLeft, "", 1.00,
		S, kFBAttachTop, "", 1.00,
		-S, kFBAttachRight, "", 1.00,
		-S, kFBAttachBottom, "", 1.00);

	// Assign regions
	SetControl(MainLayoutName, StreamLayout);

	W = 110;
	H = 18;

	// Add regions
	{
		StreamLayout.AddRegion(SampleRateLabelName, SampleRateLabelName,
			S, kFBAttachLeft, "", 1.00,
			S, kFBAttachTop, "", 1.00,
			0, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(SampleRateListName, SampleRateListName,
			0, kFBAttachRight, SampleRateLabelName, 1.00,
			0, kFBAttachTop, SampleRateLabelName, 1.00,
			W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(ProviderNameLabelName, ProviderNameLabelName,
			S*2.f, kFBAttachRight, SampleRateListName, 1.00,
			0, kFBAttachTop, SampleRateListName, 1.00,
			0, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(ProviderNameEditName, ProviderNameEditName,
			0, kFBAttachRight, ProviderNameLabelName, 1.00,
			0, kFBAttachTop, ProviderNameLabelName, 1.00,
			W*2.f, kFBAttachRight, "", 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}

	{
		StreamLayout.AddRegion(ObjectSelectorName, ObjectSelectorName,
			S, kFBAttachLeft, "", 1.00,
			S, kFBAttachBottom, SampleRateLabelName, 1.00,
			2 * W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(AddToStreamButtonName, AddToStreamButtonName,
			S, kFBAttachRight, ObjectSelectorName, 1.00,
			0, kFBAttachTop, ObjectSelectorName, 1.00,
			0.75*W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(RemoveFromStreamButtonName, RemoveFromStreamButtonName,
			S, kFBAttachRight, AddToStreamButtonName, 1.00,
			0, kFBAttachTop, AddToStreamButtonName, 1.00,
			0.75*W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);

		StreamLayout.AddRegion(StreamEditorCameraButtonName, StreamEditorCameraButtonName,
			S, kFBAttachRight, RemoveFromStreamButtonName, 1.00,
			0, kFBAttachTop, RemoveFromStreamButtonName, 1.00,
			2*W, kFBAttachNone, nullptr, 1.00,
			H, kFBAttachNone, nullptr, 1.00);
	}
	{
		StreamLayout.AddRegion(StreamSpreadName, StreamSpreadName,
			S, kFBAttachLeft, "", 1.00,
			S, kFBAttachBottom, ObjectSelectorName, 1.00,
			-S, kFBAttachRight, "", 1.00,
			-S, kFBAttachBottom, "", 1.00);
	}

	StreamLayout.SetControl(SampleRateLabelName, SampleRateListLabel);
	StreamLayout.SetControl(SampleRateListName, SampleRateList);
	StreamLayout.SetControl(ProviderNameLabelName, ProviderNameLabel);
	StreamLayout.SetControl(ProviderNameEditName, ProviderNameEdit);

	StreamLayout.SetControl(ObjectSelectorName, ObjectSelector);
	StreamLayout.SetControl(AddToStreamButtonName, AddToStreamButton);
	StreamLayout.SetControl(RemoveFromStreamButtonName, RemoveFromStreamButton);
	StreamLayout.SetControl(StreamEditorCameraButtonName, StreamEditorCameraButton);

	StreamLayout.SetControl(StreamSpreadName, StreamSpread);
}

void FMobuLiveLinkLayout::CreateSpreadColumns()
{
	StreamSpread.ColumnAdd("Subject Name", 0);
	StreamSpread.ColumnAdd("Stream Type", 1);
	StreamSpread.GetColumn(1).Style = kFBCellStyleMenu;
	StreamSpread.ColumnAdd("Status", 2);
	StreamSpread.GetColumn(2).Style = kFBCellStyle2StatesButton;
	StreamSpread.ColumnAdd("Stream Animatable", 3);
	StreamSpread.GetColumn(3).Style = kFBCellStyle2StatesButton;
}

void FMobuLiveLinkLayout::UIConfigure()
{
	SetBorder("MainLayout", kFBStandardBorder, false, true, 1, 0, 90, 0);

	ObjectSelector.Property = &ObjectSelection;

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

	//ProviderNameEdit.Caption = "Provider Name: ";
	ProviderNameEdit.Text = FStringToChar(LiveLinkDevice->GetProviderName());
	ProviderNameEdit.OnChange.Add(this, (FBCallback)&FMobuLiveLinkLayout::EventProviderNameChanged);
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
	bool bIsActive = Object->GetActiveStatus();
	StreamSpread.SetCell(NewRowKey, 2, bIsActive);
	StreamSpread.SetCell(NewRowKey, 2, BoolToActiveText(bIsActive));
	bool bSendAnimatable = Object->GetSendAnimatableStatus();
	StreamSpread.SetCell(NewRowKey, 3, bSendAnimatable);
	StreamSpread.SetCell(NewRowKey, 3, BoolToSendAnimatableText(bSendAnimatable));
	StreamSpread.GetColumn(3).Style = kFBCellStyle2StatesButton;
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
			StreamObjectPtr StoreObject = StreamObjectManagement::FBModelToStreamObject(Model, LiveLinkDevice->LiveLinkProvider);
			int32 NewUID = LiveLinkDevice->GetNextUID();
			LiveLinkDevice->StreamObjects.Emplace(NewUID, StoreObject);
			AddSpreadRowFromStreamObject(NewUID, StoreObject);
			FBTrace("Added New Object to StreamObject\n");

			ParentsToIgnore.Emplace(Model);
			
		}
	}
	ObjectSelection.Clear();
}

void FMobuLiveLinkLayout::EventRemoveFromStream(HISender Sender, HKEvent Event)
{
	int SelectedCount = 0;
	TArray<int32> DeletionObjects;
	DeletionObjects.Reserve(LiveLinkDevice->StreamObjects.Num());
	for (const TPair<int32, StreamObjectPtr>& MapPair : LiveLinkDevice->StreamObjects)
	{
		int32 RowKey = MapPair.Key;
		bool bRowSelected = StreamSpread.GetRow(RowKey).RowSelected;
		if (bRowSelected)
		{
			DeletionObjects.Emplace(RowKey);
			SelectedCount++;
		}
	}
	for (int32 DeletionKey : DeletionObjects)
	{
		LiveLinkDevice->StreamObjects.Remove(DeletionKey);
	}
	if (SelectedCount > 0)
	{
		UIReset();
	}
	FBTrace("%d items in selection!\n", SelectedCount);
}

void FMobuLiveLinkLayout::EventStreamEditorCamera(HISender Sender, HKEvent Event)
{
	LiveLinkDevice->SetEditorCameraStreamed(StreamEditorCameraButton.State);
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
		(*ObjectPtr)->UpdateSubjectName(FName(NewSubjectName));
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
		StreamSpread.SetCell(SpreadEvent.Row, SpreadEvent.Column, BoolToActiveText(bIsActive > 0));
		(*ObjectPtr)->UpdateActiveStatus(bIsActive > 0);
		break;
	}
	case 3: // Stream Animatable
	{
		int bIsAnimatable;
		StreamSpread.GetCell(SpreadEvent.Row, SpreadEvent.Column, bIsAnimatable);
		StreamSpread.SetCell(SpreadEvent.Row, SpreadEvent.Column, BoolToSendAnimatableText(bIsAnimatable > 0));
		(*ObjectPtr)->UpdateSendAnimatableStatus(bIsAnimatable > 0);
		break;
	}
	default:
		break;
	}
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

void FMobuLiveLinkLayout::EventProviderNameChanged(HISender Sender, HKEvent Event)
{
	char* Value;
	ProviderNameEdit.Text.GetData(&Value, sizeof(Value));
	LiveLinkDevice->SetProviderName(CharToFString(Value));
}
