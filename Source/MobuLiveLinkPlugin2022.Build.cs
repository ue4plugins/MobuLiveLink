// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2022 : MobuLiveLinkPluginBase
{
	public override string PyFullVerFloat() => "3.7.7";
	public override string PyVer() => "37";
	public MobuLiveLinkPlugin2022(ReadOnlyTargetRules Target) : base(Target, "2022")
	{
		CppStandard = CppStandardVersion.Cpp17;
	}
}
