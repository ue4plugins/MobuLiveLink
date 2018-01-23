// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkLayout.h"
#include <string>

#define MOBULIVELINK__LAYOUT	MobuLiveLinkLayout

FBDeviceLayoutImplementation(MOBULIVELINK__LAYOUT);
FBRegisterDeviceLayout(MOBULIVELINK__LAYOUT,
	MOBULIVELINK__CLASSSTR,
	FB_DEFAULT_SDK_ICON);


#define BoolToActiveText(input) (input ? "Active" : "Inactive")

bool MobuLiveLinkLayout::FBCreate()
{
	// Set up Storage Functions

	ModelStoreFunctions.Emplace(FBCamera::TypeInfo, (ModelStoreFunctionType)&MobuLiveLinkLayout::StoreCamera);
	ModelStoreFunctions.Emplace(FBLight::TypeInfo, (ModelStoreFunctionType)&MobuLiveLinkLayout::StoreLight);
	ModelStoreFunctions.Emplace(FBModelSkeleton::TypeInfo, (ModelStoreFunctionType)&MobuLiveLinkLayout::StoreSkeleton);
	ModelStoreFunctions.Emplace(FBModelRoot::TypeInfo, (ModelStoreFunctionType)&MobuLiveLinkLayout::StoreSkeleton);

	// Get a handle on the device.
	LiveLinkDevice = ((MobuLiveLink *)(FBDevice *)Device);

	FBPropertyPublish(this, ObjectSelection, "ObjectSelection", NULL, NULL);
	ObjectSelection.SetFilter(FBModel::GetInternalClassId());
	ObjectSelection.SetSingleConnect(false);

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
		2 * W, kFBAttachNone, nullptr, 1.00,
		H, kFBAttachNone, nullptr, 1.00);

	StreamLayout.AddRegion("AddToStreamButton", "AddToStreamButton",
		S, kFBAttachRight, "ObjectSelector", 1.00,
		0, kFBAttachTop, "ObjectSelector", 1.00,
		W, kFBAttachNone, nullptr, 1.00,
		H, kFBAttachNone, nullptr, 1.00);


	StreamLayout.AddRegion("RemoveFromStreamButton", "RemoveFromStreamButton",
		S, kFBAttachRight, "AddToStreamButton", 1.00,
		0, kFBAttachTop, "AddToStreamButton", 1.00,
		W, kFBAttachNone, nullptr, 1.00,
		H, kFBAttachNone, nullptr, 1.00);

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

void MobuLiveLinkLayout::CreateSpreadColumns()
{
	StreamSpread.ColumnAdd("Subject Name", 0);
	StreamSpread.ColumnAdd("Stream Type", 1);
	StreamSpread.GetColumn(1).Style = kFBCellStyleMenu;
	StreamSpread.ColumnAdd("Status", 2);
	StreamSpread.GetColumn(2).Style = kFBCellStyle2StatesButton;
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
	StreamSpread.MultiSelect = true;

	CreateSpreadColumns();

	StreamSpread.OnCellChange.Add(this, (FBCallback)&MobuLiveLinkLayout::EventStreamSpreadCellChange);
}

void MobuLiveLinkLayout::UIReset()
{
	FBTrace("UI Reset!\n");
	StreamSpread.Clear();
	CreateSpreadColumns();
	for (const auto MapPair : LiveLinkDevice->StreamObjects)
	{
		AddSpreadRowFromStreamObject(MapPair.Value);
	}
	LiveLinkDevice->SetRefreshUI(false);
}


void MobuLiveLinkLayout::EventDeviceStatusChange(HISender Sender, HKEvent Event)
{
	// UIReset();
}


void MobuLiveLinkLayout::EventUIIdle(HISender Sender, HKEvent Event)
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

void MobuLiveLinkLayout::AddSpreadRowFromStreamObject(StreamObjectPtr Object)
{
	// Check whether the Object should be shown
	if (!Object->ShouldShowInUI()) return;

	const kReference ObjectReference = Object->GetReference();
	const FString RootName = Object->GetRootName();

	StreamSpread.RowAdd(FStringToChar(RootName), ObjectReference);

	StreamSpread.SetCell(ObjectReference, 0, FStringToChar(Object->GetSubjectName().ToString()));
	StreamSpread.SetCell(ObjectReference, 1, FStringToChar(Object->GetStreamOptions()));
	StreamSpread.SetCell(ObjectReference, 1, Object->GetStreamingMode());
	bool bIsActive = Object->GetActiveStatus();
	StreamSpread.SetCell(ObjectReference, 2, bIsActive);
	StreamSpread.SetCell(ObjectReference, 2, BoolToActiveText(bIsActive));
}


FORCEINLINE bool IsModelInDeviceStream(const MobuLiveLink* MobuDevice, const FBModel* Model)
{
	return MobuDevice->StreamObjects.Contains((kReference)Model);
	//return Device->StreamObjects.ContainsByPredicate([Model](const TSharedPtr<StreamObject> Storage) { return Storage->RootModel == Model; });
}

void MobuLiveLinkLayout::EventAddToStream(HISender Sender, HKEvent Event)
{
	TArray<FBModel*> ParentsToIgnore;
	ParentsToIgnore.Reserve(ObjectSelection.GetCount());

	for (int CharIndex = 0; CharIndex < ObjectSelection.GetCount(); ++CharIndex)
	{
		FBModel* Model = (FBModel*)ObjectSelection.GetAt(CharIndex);

		// Only grab root items
		// Temp solution. Not a huge fan. 
		// perhaps have creation functions contain a list of models to exclude?
		if (ParentsToIgnore.Contains(Model->Parent))
		{
			ParentsToIgnore.Emplace(Model);
		}
		else if (!IsModelInDeviceStream(LiveLinkDevice, Model))
		{
			ModelStoreFunctionType* StoreFunction = ModelStoreFunctions.Find(Model->GetTypeId());
			StreamObjectPtr StoreObject;
			if (StoreFunction != nullptr)
			{
				StoreObject = (this->*(*StoreFunction))(Model);
			}
			else
			{
				StoreObject = StoreGeneric(Model);
			}
			LiveLinkDevice->StreamObjects.Emplace((kReference)Model, StoreObject);
			AddSpreadRowFromStreamObject(StoreObject);
			FBTrace("Added New Object to StreamObject\n");

			ParentsToIgnore.Emplace(Model);
			
		}
	}
	ObjectSelection.Clear();
}

void MobuLiveLinkLayout::EventRemoveFromStream(HISender Sender, HKEvent Event)
{
	int SelectedCount = 0;
	TArray<kReference> DeletionObjects;
	DeletionObjects.Reserve(LiveLinkDevice->StreamObjects.Num());
	for (const auto& MapPair : LiveLinkDevice->StreamObjects)
	{
		kReference RowKey = MapPair.Value->GetReference();
		bool bRowSelected = StreamSpread.GetRow(RowKey).RowSelected;
		if (bRowSelected)
		{
			DeletionObjects.Emplace(RowKey);
			SelectedCount++;
		}
	}
	for (const auto& DeletionKey : DeletionObjects)
	{
		LiveLinkDevice->StreamObjects.Remove(DeletionKey);
	}
	if (SelectedCount > 0)
	{
		UIReset();
	}
	FBTrace("%d items in selection!\n", SelectedCount);
}

void MobuLiveLinkLayout::EventStreamSpreadCellChange(HISender Sender, HKEvent Event)
{
	FBEventSpread SpreadEvent = Event;

	auto ObjectPtr = LiveLinkDevice->StreamObjects.Find(SpreadEvent.Row);
	if (ObjectPtr == nullptr)
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
	default:
		break;
	}
}


MobuLiveLinkLayout::StreamObjectPtr MobuLiveLinkLayout::StoreCamera(const FBModel* Model)
{
	FBTrace("%s is a Camera!\n", Model->LongName);

	StreamObjectPtr CameraStore(new CameraStreamObject(Model, LiveLinkDevice->LiveLinkProvider));
	return CameraStore;
}

MobuLiveLinkLayout::StreamObjectPtr MobuLiveLinkLayout::StoreLight(const FBModel* Model)
{
	FBTrace("%s is a Light!\n", Model->LongName);

	StreamObjectPtr LightStore(new LightStreamObject(Model, LiveLinkDevice->LiveLinkProvider));
	return LightStore;
}

MobuLiveLinkLayout::StreamObjectPtr MobuLiveLinkLayout::StoreGeneric(const FBModel* Model)
{
	FBTrace("%s is an Unknown Type! - %s\n", Model->LongName, ((FBModel*)Model)->ClassName());

	StreamObjectPtr GenericStore(new ModelStreamObject(Model, LiveLinkDevice->LiveLinkProvider));
	return GenericStore;
}

MobuLiveLinkLayout::StreamObjectPtr MobuLiveLinkLayout::StoreSkeleton(const FBModel* Model)
{
	FBTrace("%s is a Skeleton!\n", Model->LongName);

	StreamObjectPtr SkeletonStore(new SkeletonHierarchyStreamObject(Model, LiveLinkDevice->LiveLinkProvider));
	return SkeletonStore;
}