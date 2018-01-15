// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;

public class MobuLiveLinkPluginTarget : TargetRules
{
    public string ModuleDirectory
    {
        get
        {
            return Path.GetDirectoryName(RulesCompiler.GetFileNameFromType(GetType()));
        }
    }

	public string BinariesDirectory
    {
		get
        { 
		return Path.GetFullPath(Path.Combine("../Binaries", "Win64/MotionBuilder"));
        }
    }

    public MobuLiveLinkPluginTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Program;

        bShouldCompileAsDLL = true;
        LinkType = TargetLinkType.Monolithic;
        ExeBinariesSubFolder = "MotionBuilder";
        LaunchModuleName = "MobuLiveLinkPlugin";

        // We only need minimal use of the engine for this plugin
        bCompileLeanAndMeanUE = true;
        bUseMallocProfiler = false;
        bBuildEditor = false;
        bBuildWithEditorOnlyData = true;
        bCompileAgainstEngine = false;
        bCompileAgainstCoreUObject = true;
        bCompileICU = false;
        bHasExports = false;

        string ResourcesFolder = Path.GetFullPath(Path.Combine(ModuleDirectory, "../Resources"));
        PostBuildSteps.Add("copy /a /b /y /v \"" + ResourcesFolder + "\\*.*\" \"" + BinariesDirectory + "\"");
    }
}
