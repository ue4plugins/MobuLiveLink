// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2020 : MobuLiveLinkPluginBase
{
	public override string PyFullVerFloat() => "2.7.11";
	public override string PyVer() => "27";
	public MobuLiveLinkPlugin2020(ReadOnlyTargetRules Target) : base(Target, "2020")
	{
	}
}
