// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;

public class MobuLiveLinkPlugin2016Target : MobuLiveLinkPluginTargetBase
{
	public MobuLiveLinkPlugin2016Target(TargetInfo Target) : base(Target, "2016")
	{
		//Mobu is not strict c++ compliant before Mobu 2019 
		WindowsPlatform.bStrictConformanceMode = false;
		CppStandard = CppStandardVersion.Cpp17;
	}
}