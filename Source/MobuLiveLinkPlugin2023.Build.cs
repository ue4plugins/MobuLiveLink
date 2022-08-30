// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2023 : MobuLiveLinkPluginBase
{
	readonly private string pythonFullVersion = "3.9.7";
	public override string PythonFullVersion => pythonFullVersion;
	readonly private string pythonVersion = "39";
	public override string PythonVersion => pythonVersion;
	public MobuLiveLinkPlugin2023(ReadOnlyTargetRules Target) : base(Target, "2023")
	{
		CppStandard = CppStandardVersion.Cpp17;
	}
}
