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
	/*delete ChildQtWidget;
	ChildQtWidget = nullptr;*/
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

	StreamSpread.Caption = "Object Root";
	StreamSpread.MultiSelect = true;
	StreamSpread.ColumnAdd("Subject Name", 0);
	StreamSpread.ColumnAdd("Stream Type", 1);
	StreamSpread.ColumnAdd("Status", 2);

	StreamSpread.RowAdd(IntToChar(FBLight::TypeInfo));
	StreamSpread.RowAdd("Light");
	StreamSpread.RowAdd(IntToChar(FBCamera::TypeInfo));
	StreamSpread.RowAdd("Camera");
	StreamSpread.RowAdd(IntToChar(FBModelSkeleton::TypeInfo));
	StreamSpread.RowAdd("Skeleton");
	StreamSpread.RowAdd(IntToChar(FBModel::TypeInfo));
	StreamSpread.RowAdd("Model");
}


void MobuLiveLinkLayout::UIRefresh()
{
}


void MobuLiveLinkLayout::UIReset()
{
}


void MobuLiveLinkLayout::EventDeviceStatusChange(HISender Sender, HKEvent Event)
{
	UIReset();
}


void MobuLiveLinkLayout::EventUIIdle(HISender Sender, HKEvent Event)
{
	if (LiveLinkDevice->Online)
	{
		UIRefresh();
	}
}

void MobuLiveLinkLayout::EventAddToStream(HISender Sender, HKEvent Event)
{
	for (int CharIndex = 0; CharIndex < ObjectSelection.GetCount(); ++CharIndex)
	{
		FBModel* Model = (FBModel*)ObjectSelection.GetAt(CharIndex);
		ModelStoreFunctionType* StoreFunction = ModelStoreFunctions.Find(Model->GetTypeId());
		if (StoreFunction != nullptr)
		{
			(this->*(*StoreFunction))(Model);
		}
		else
		{
			FBTrace("Unknown Object Type for: ");
			FBTrace(Model->LongName);
			FBTrace("\n");
		}
		//if (Model->GetTypeId() == FBLight::TypeInfo)
		//{
		//	StreamSpread.RowAdd("Light");
		//}
		//else if (Model->GetTypeId() == FBCamera::TypeInfo)
		//{
		//	StreamSpread.RowAdd("Camera");
		//}
		//else if (Model->GetTypeId() == FBModelSkeleton::TypeInfo)
		//{
		//	StreamSpread.RowAdd("Skeleton");
		//}
		//else
		//{
		//	StreamSpread.RowAdd("Other");
		//}
	}
}

void MobuLiveLinkLayout::StoreCamera(FBModel* Model)
{
	FBCamera* CameraModel = (FBCamera*)Model;
	FBTrace(Model->LongName);
	FBTrace(" is a Camera!\n");

}