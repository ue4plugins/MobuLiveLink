// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2016 : MobuLiveLinkPluginBase
{
	readonly private string pythonFullVersion = "2.7.6";
	public override string PythonFullVersion => pythonFullVersion;
	readonly private string pythonVersion = "27";
	public override string PythonVersion => pythonVersion;
	public MobuLiveLinkPlugin2016(ReadOnlyTargetRules Target) : base(Target, "2016")
	{
	}
}
