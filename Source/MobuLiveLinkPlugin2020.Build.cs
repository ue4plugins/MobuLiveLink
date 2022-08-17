// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2020 : MobuLiveLinkPluginBase
{
	readonly private string pythonFullVersion = "2.7.11";
	public override string PythonFullVersion => pythonFullVersion;
	readonly private string pythonVersion = "27";
	public override string PythonVersion => pythonVersion;
	public MobuLiveLinkPlugin2020(ReadOnlyTargetRules Target) : base(Target, "2020")
	{
	}
}
