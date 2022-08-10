// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2018 : MobuLiveLinkPluginBase
{
	public override string PyFullVerFloat() => "2.7.6";
	public override string PyVer() => "27";
	public MobuLiveLinkPlugin2018(ReadOnlyTargetRules Target) : base(Target, "2018")
	{
	}
}
