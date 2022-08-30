// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin2022 : MobuLiveLinkPluginBase
{
	readonly private string pythonFullVersion = "3.7.7";
	public override string PythonFullVersion => pythonFullVersion;
	readonly private string pythonVersion = "37";
	public override string PythonVersion => pythonVersion;
	public MobuLiveLinkPlugin2022(ReadOnlyTargetRules Target) : base(Target, "2022")
	{
		CppStandard = CppStandardVersion.Cpp17;
		IncludePyFbSdkVersionSpecific();
	}
}
