// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2016 : MobuLiveLinkPluginBase
{
	public MobuLiveLinkPlugin2016(ReadOnlyTargetRules Target) : base(Target, "2016")
	{
		// NOTE: A spot fix for an SDK header is required for include/fbsdk/fbproperties.h
		// Line 783:
		// 	From:	inline void operator=(tType pValue)					{ SetData( &pValue ); }
		// 	To:		inline void operator=(tType pValue)					{ this->SetData( &pValue ); }
		// Line 790:
		// 	From:	inline operator tType() const						{ tType Value; GetData( &Value,sizeof(Value) ); return Value; } 
		// 	To:		inline operator tType() const						{ tType Value; this->GetData( &Value,sizeof(Value) ); return Value; } 
	}
}
