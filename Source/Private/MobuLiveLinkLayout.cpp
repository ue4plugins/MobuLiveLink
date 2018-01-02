// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkLayout.h"

#define MOBULIVELINK__LAYOUT	MobuLiveLinkLayout

FBDeviceLayoutImplementation(MOBULIVELINK__LAYOUT);
FBRegisterDeviceLayout(MOBULIVELINK__LAYOUT,
	MOBULIVELINK__CLASSSTR,
	FB_DEFAULT_SDK_ICON);

//#pragma optimize("", off)

//MobuLiveLinkLayout* MobuLiveLinkQtFrame::CreatingLayout = nullptr;

#define IntToChar(input) std::to_string(input).c_str()

bool MobuLiveLinkLayout::FBCreate()
{
	// Set up Storage Functions

	ModelStoreFunctions.Emplace(FBCamera::TypeInfo, (ModelStoreFunctionType)&MobuLiveLinkLayout::StoreCamera);

	// Get a handle on the device.
	LiveLinkDevice = ((MobuLiveLink *)(FBDevice *)Device);

	FBPropertyPublish(this, ObjectSelection, "ObjectSelection", NULL, NULL);
	ObjectSelection.SetFilter(FBModel::GetInternalClassId());

	UICreate();
	UIConfigure();
	UIReset();

	LiveLinkDevice->OnStatusChange.Add(this, (FBCallback)&MobuLiveLinkLayout::EventDeviceStatusChange);
	System.OnUIIdle.Add(this, (FBCallback)&MobuLiveLinkLayout::EventUIIdle);

	return true;
}


void MobuLiveLinkLayout::FBDestroy()
{
	// Remove device & system callbacks
	FBTrace("Destroying\n");

	System.OnUIIdle.Remove(this, (FBCallback)&MobuLiveLinkLayout::EventUIIdle);
	LiveLinkDevice->OnStatusChange.Remove(this, (FBCallback)&MobuLiveLinkLayout::EventDeviceStatusChange);
}

void MobuLiveLinkLayout::UICreate()
{
	int S, W, H;		// space, height
	S = 4;
	H = 25;

	// Create regions
	AddRegion("MainLayout", "MainLayout", 
		S, kFBAttachLeft, "", 1.00,
		S, kFBAttachTop, "", 1.00,
		-S, kFBAttachRight, "", 1.00,
		-S, kFBAttachBottom, "", 1.00);

	// Assign regions
	SetControl("MainLayout", StreamLayout);

	W = 110;
	H = 18;

	// Add regions

	StreamLayout.AddRegion("ObjectSelector", "ObjectSelector",
		S, kFBAttachLeft, "", 1.00,
		S, kFBAttachTop, "", 1.00,
		2 * W, kFBAttachNone, NULL, 1.00,
		H, kFBAttachNone, NULL, 1.00);

	StreamLayout.AddRegion("AddToStreamButton", "AddToStreamButton",
		S, kFBAttachRight, "ObjectSelector", 1.00,
		0, kFBAttachTop, "ObjectSelector", 1.00,
		W, kFBAttachNone, NULL, 1.00,
		H, kFBAttachNone, NULL, 1.00);


	StreamLayout.AddRegion("RemoveFromStreamButton", "RemoveFromStreamButton",
		S, kFBAttachRight, "AddToStreamButton", 1.00,
		0, kFBAttachTop, "AddToStreamButton", 1.00,
		W, kFBAttachNone, NULL, 1.00,
		H, kFBAttachNone, NULL, 1.00);

	StreamLayout.AddRegion("StreamSpread", "StreamSpread",
		S, kFBAttachLeft, "", 1.00,
		S, kFBAttachBottom, "ObjectSelector", 1.00,
		-S, kFBAttachRight, "", 1.00,
		-S, kFBAttachBottom, "", 1.00);

	StreamLayout.SetControl("ObjectSelector", ObjectSelector);
	StreamLayout.SetControl("AddToStreamButton", AddToStreamButton);
	StreamLayout.SetControl("RemoveFromStreamButton", RemoveFromStreamButton);
	StreamLayout.SetControl("StreamSpread", StreamSpread);
}



void MobuLiveLinkLayout::UIConfigure()
{
	SetBorder("MainLayout", kFBStandardBorder, false, true, 1, 0, 90, 0);

	ObjectSelector.Property = &ObjectSelection;

	AddToStreamButton.Caption = "Add";
	AddToStreamButton.Justify = kFBTextJustifyCenter;
	AddToStreamButton.OnClick.Add(this, (FBCallback)&MobuLiveLinkLayout::EventAddToStream);

	RemoveFromStreamButton.Caption = "Remove";
	RemoveFromStreamButton.Justify = kFBTextJustifyCenter;
	RemoveFromStreamButton.OnClick.Add(this, (FBCallback)&MobuLiveLinkLayout::EventRemoveFromStream);

	StreamSpread.Caption = "Object Root";
	//StreamSpread.GetColumn(-1).Width = 0;
	StreamSpread.MultiSelect = true;
	StreamSpread.ColumnAdd("Subject Name", 0);
	StreamSpread.ColumnAdd("Stream Type", 1);
	StreamSpread.GetColumn(1).Style = kFBCellStyleMenu;
	StreamSpread.ColumnAdd("Status", 2);
	StreamSpread.GetColumn(2).Style = kFBCellStyle2StatesButton;
}


void MobuLiveLinkLayout::UIRefresh()
{
}


void MobuLiveLinkLayout::UIReset()
{
	for (const auto Object : LiveLinkDevice->StreamObjects)
	{
		AddSpreadRowFromStreamObject(Object);
	}
}


void MobuLiveLinkLayout::EventDeviceStatusChange(HISender Sender, HKEvent Event)
{
	// UIReset();
}


void MobuLiveLinkLayout::EventUIIdle(HISender Sender, HKEvent Event)
{
	if (LiveLinkDevice->Online)
	{
		UIRefresh();
	}
}

void MobuLiveLinkLayout::AddSpreadRowFromStreamObject(StreamObjectPtr Object)
{
	StreamSpread.RowAdd(Object->RootModel->LongName, (kReference)Object->RootModel);
	StreamSpread.SetCell((kReference)Object->RootModel, 0, "Blah");
	StreamSpread.SetCell((kReference)Object->RootModel, 1, Object->GetStreamOptions());
	StreamSpread.SetCell((kReference)Object->RootModel, 2, true);
	StreamSpread.SetCell((kReference)Object->RootModel, 2, "Active");
}


FORCEINLINE bool IsModelInDeviceStream(const MobuLiveLink* Device, const FBModel* Model)
{
	return Device->StreamObjects.ContainsByPredicate([Model](const TSharedPtr<StreamObject> Storage) { return Storage->RootModel == Model; });
}

void MobuLiveLinkLayout::EventAddToStream(HISender Sender, HKEvent Event)
{
	for (int CharIndex = 0; CharIndex < ObjectSelection.GetCount(); ++CharIndex)
	{
		FBModel* Model = (FBModel*)ObjectSelection.GetAt(CharIndex);
		if (!IsModelInDeviceStream(LiveLinkDevice, Model))
		{
			ModelStoreFunctionType* StoreFunction = ModelStoreFunctions.Find(Model->GetTypeId());
			if (StoreFunction != nullptr)
			{
				StreamObjectPtr StoreObject = (this->*(*StoreFunction))(Model);
				LiveLinkDevice->StreamObjects.Emplace(StoreObject);
				AddSpreadRowFromStreamObject(StoreObject);
				FBTrace("Added New Object to StreamObject\n");
			}
			else
			{
				FBTrace("Unknown Object Type for: ");
				FBTrace(Model->LongName);
				FBTrace("\n");
			}
		}
	}
	ObjectSelection.Clear();
}

void MobuLiveLinkLayout::EventRemoveFromStream(HISender Sender, HKEvent Event)
{
	
}

MobuLiveLinkLayout::StreamObjectPtr MobuLiveLinkLayout::StoreCamera(const FBModel* Model)
{
	FBTrace(Model->LongName);
	FBTrace(" is a Camera!\n");

	StreamObjectPtr CameraStore(new CameraStreamObject(Model, LiveLinkDevice->LiveLinkProvider));
	return CameraStore;
}