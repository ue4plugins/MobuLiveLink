// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;

public abstract class MobuLiveLinkPluginTargetBase : TargetRules
{
	public MobuLiveLinkPluginTargetBase(TargetInfo Target, string InMobuVersionString) : base(Target)
	{
		Type = TargetType.Program;

		bShouldCompileAsDLL = true;
		LinkType = TargetLinkType.Monolithic;

		Tools.DotNETCommon.Log.TraceLog("MyMessage" + this.Name);

		bool bIsNotForLicensees = false;
		string NotForLicenseesFolder = bIsNotForLicensees ? "NotForLicensees" : "";

		ExeBinariesSubFolder = Path.Combine(NotForLicenseesFolder, "MotionBuilder", InMobuVersionString);
		LaunchModuleName = "MobuLiveLinkPlugin" + InMobuVersionString;

		// We only need minimal use of the engine for this plugin
		bBuildDeveloperTools = false;
		bUseMallocProfiler = false;
		bBuildWithEditorOnlyData = true;
		bCompileAgainstEngine = false;
		bCompileAgainstCoreUObject = true;
		bCompileICU = false;
		bHasExports = false;

		string ResourcesFolder = Path.GetFullPath(Path.Combine("Programs", NotForLicenseesFolder, "MobuLiveLink/Resources"));
		string BinariesDirectory = Path.GetFullPath(Path.Combine("../Binaries", "Win64", NotForLicenseesFolder, "MotionBuilder", InMobuVersionString));
		string Command = "copy /a /b /y /v \"" + ResourcesFolder + "\\*.*\" \"" + BinariesDirectory + "\"";
		PostBuildSteps.Add(Command);
	}
}

public class MobuLiveLinkPlugin2017Target : MobuLiveLinkPluginTargetBase
{
	public MobuLiveLinkPlugin2017Target(TargetInfo Target) : base(Target, "2017")
	{ }
}