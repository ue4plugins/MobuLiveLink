// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2016 : MobuLiveLinkPluginBase
{
	public override string PyFullVerFloat() => "2.7.6";
	public override string PyVer() => "27";
	public MobuLiveLinkPlugin2016(ReadOnlyTargetRules Target) : base(Target, "2016")
	{
	}
}
