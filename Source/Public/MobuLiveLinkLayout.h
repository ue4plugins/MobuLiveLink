// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "QtGui/QFrame"
#include "QtGui/QLayout"
#include "QtGui/QLabel"
#include "MobuLiveLinkDevice.h"

class MobuLiveLinkLayout : public FBDeviceLayout
{
	FBDeviceLayoutDeclare(MobuLiveLinkLayout, FBDeviceLayout);

public:
	virtual bool FBCreate();
	virtual void FBDestroy();

	// UI Management
	void UICreate();
	void UIConfigure();
	void UIReset();
	void UIRefresh();

	// Main Layout: Events
	void EventDeviceStatusChange(HISender Sender, HKEvent Event);
	void EventUIIdle(HISender Sender, HKEvent Event);

public:
	//friend class MobuLiveLinkQtFrame;

	FBWidgetHolder			QtFrame;

private:
	FBSystem				System;
	MobuLiveLink*			LiveLinkDevice;
};

class MobuLiveLinkQtFrame : public QFrame
{
	Q_OBJECT;

public:

	//friend class MobuLiveLink;
	//friend class MobuLiveLinkLayout;
	//friend class FBWidgetHolder;

	MobuLiveLinkQtFrame(QWidget* parent);
	virtual ~MobuLiveLinkQtFrame() {};

	static void* CreateFunction(void* widgetParent);
	//static void CreateIn(MobuLiveLinkLayout* deviceLayout);

};