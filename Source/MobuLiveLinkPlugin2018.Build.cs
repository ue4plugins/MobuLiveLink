// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2018 : MobuLiveLinkPluginBase
{
	readonly private string pythonFullVersion = "2.7.6";
	public override string PythonFullVersion => pythonFullVersion;
	readonly private string pythonVersion = "27";
	public override string PythonVersion => pythonVersion;
	public MobuLiveLinkPlugin2018(ReadOnlyTargetRules Target) : base(Target, "2018")
	{
	}
}
