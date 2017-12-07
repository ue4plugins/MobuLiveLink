// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;

public class MobuLiveLinkPluginTarget : TargetRules
{
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

        if (HostPlatform == UnrealTargetPlatform.Win64)
        {
            string MobuVersionString = "2017";
            string MobuInstallFolder = @"D:\Programs\Autodesk\MotionBuilder " + MobuVersionString;
            string MocPath = Path.Combine(MobuInstallFolder, "bin/x64/moc.exe");

            // TODO: Figure out how to get ModuleDirectory inside of a .target.cs
            string ModuleDirectory = @"D:\LivelinkPlugin\UnrealEngine-4.18.1-release\Engine\Source\Programs\MobuLiveLinkPlugin";
            string OutputPath = Path.Combine(ModuleDirectory, "MOC");
            string[] FilesToBeMocced = new string[] {
                Path.Combine(ModuleDirectory, @"Source\Public\MobuLiveLinkLayout")
            };

			// Add a prebuild step to run MOC for each of the headers that require it
            foreach (string FileToBeMocced in FilesToBeMocced)
            {
                string FileName = Path.GetFileName(FileToBeMocced);
                string MoccedFile = Path.Combine(OutputPath, FileName);
                PreBuildSteps.Add("echo \"" + MocPath + "\" \"" + FileToBeMocced + ".h\"" + " -o \"" + MoccedFile + "_moc.cpp\"");
                PreBuildSteps.Add("\"" + MocPath + "\" \"" + FileToBeMocced + ".h\"" + " -o \"" + MoccedFile + "_moc.cpp\"");
            }
        }
        }
}
