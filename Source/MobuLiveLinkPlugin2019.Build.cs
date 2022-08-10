// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2019 : MobuLiveLinkPluginBase
{
	public override string PyFullVerFloat() => "2.7.11";
	public override string PyVer() => "27";
	public MobuLiveLinkPlugin2019(ReadOnlyTargetRules Target) : base(Target, "2019")
	{
	}
}
