// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MobuLiveLinkLayout_moc.cpp"

#define MOBULIVELINK__LAYOUT	MobuLiveLinkLayout

FBDeviceLayoutImplementation(MOBULIVELINK__LAYOUT);
FBRegisterDeviceLayout(MOBULIVELINK__LAYOUT,
	MOBULIVELINK__CLASSSTR,
	FB_DEFAULT_SDK_ICON);

//#pragma optimize("", off)

bool MobuLiveLinkLayout::FBCreate()
{
	// Get a handle on the device.
	LiveLinkDevice = ((MobuLiveLink *)(FBDevice *)Device);

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
	OnIdle.Remove(this, (FBCallback)&MobuLiveLinkLayout::EventUIIdle);
	LiveLinkDevice->OnStatusChange.Remove(this, (FBCallback)&MobuLiveLinkLayout::EventDeviceStatusChange);
}


void MobuLiveLinkLayout::UICreate()
{
	int S = 4;	

	// Create regions
	AddRegion("MainLayout", "MainLayout", 
		S, kFBAttachLeft, "", 1.00,
		S, kFBAttachTop, "", 1.00,
		-S, kFBAttachRight, "", 1.00,
		-S, kFBAttachBottom, "", 1.00);

	// Assign regions
	SetControl("MainLayout", QtFrame);
	QtFrame.SetCreator((FBWidgetHolder::WidgetCreator)MobuLiveLinkQtFrame::CreateFunction);
	//MobuLiveLinkQtFrame::CreatingLayout = this;
}



void MobuLiveLinkLayout::UIConfigure()
{
	SetBorder("MainLayout", kFBStandardBorder, false, true, 1, 0, 90, 0);
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


void* MobuLiveLinkQtFrame::CreateFunction(void* widgetParent)
{
	MobuLiveLinkQtFrame* layout = new MobuLiveLinkQtFrame((QWidget*)widgetParent);
	return (void*)layout;
}

MobuLiveLinkQtFrame::MobuLiveLinkQtFrame(QWidget* parent) 
: QFrame(parent)
{
	QHBoxLayout* TestLayout = new QHBoxLayout();
	setLayout(TestLayout);

	QLabel* TestLabel = new QLabel("This is a test label using Qt");
	TestLabel->setAlignment(Qt::AlignVCenter | Qt::AlignCenter);
	TestLabel->setMaximumWidth(200);
	TestLabel->setMinimumWidth(200);

	TestLayout->addWidget(TestLabel);
}