// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;

public class MobuLiveLinkPlugin2018Target : MobuLiveLinkPluginTargetBase
{
	public MobuLiveLinkPlugin2018Target(TargetInfo Target) : base(Target, "2018")
	{
		//Mobu is not strict c++ compliant before Mobu 2019 
		WindowsPlatform.bStrictConformanceMode = false;
	}
}