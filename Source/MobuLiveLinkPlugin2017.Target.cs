// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;
using Tools.DotNETCommon;
using System.Runtime.CompilerServices;

[SupportedPlatforms(UnrealPlatformClass.Desktop)]
public abstract class MobuLiveLinkPluginTargetBase : TargetRules
{
	/// <summary>
	/// Finds the innermost parent directory with the provided name. Search is case insensitive.
	/// </summary>
	string InnermostParentDirectoryPathWithName(string ParentName, string CurrentPath)
    {
		DirectoryInfo ParentInfo = Directory.GetParent(CurrentPath);

		if (ParentInfo == null)
        {
			throw new DirectoryNotFoundException("Could not find parent folder '" + ParentName + "'");
        }

		// Case-insensitive check of the parent folder name.
		if (ParentInfo.Name.ToLower() == ParentName.ToLower())
        {
			return ParentInfo.ToString();
        }

		return InnermostParentDirectoryPathWithName(ParentName, ParentInfo.ToString());
	}

	/// <summary>
	/// Returns the path to this .cs file.
	/// </summary>
	string GetCallerFilePath([CallerFilePath] string CallerFilePath = "")
    {
		if (CallerFilePath.Length == 0)
		{
			throw new FileNotFoundException("Could not find the path of our .cs file");
		}

		return CallerFilePath;
	}

	public MobuLiveLinkPluginTargetBase(TargetInfo Target, string InMobuVersionString) : base(Target)
	{
		Type = TargetType.Program;

		bShouldCompileAsDLL = true;
		LinkType = TargetLinkType.Monolithic;
		SolutionDirectory = "Programs/LiveLink";
		LaunchModuleName = "MobuLiveLinkPlugin" + InMobuVersionString;

		// We only need minimal use of the engine for this plugin
		bBuildDeveloperTools = false;
		bUseMallocProfiler = false;
		bBuildWithEditorOnlyData = true;
		bCompileAgainstEngine = false;
		bCompileAgainstCoreUObject = true;
		bCompileICU = false;
		bHasExports = false;

		// This .cs file must be inside the source folder of this Program. We later use this to find other key directories.
		string TargetFilePath = GetCallerFilePath();

		// We need to avoid failing to load DLL due to looking for EngineDir() in non-existent folders.
		// By having it build in the same directory as the engine, it will assume the engine is in the same directory
		// as the program, and because this folder always exists, it will not fail the check inside EngineDir().

		// Because this is a Program, we assume that this target file resides under a "Programs" folder.
		string ProgramsDir = InnermostParentDirectoryPathWithName("Programs", TargetFilePath);

		// We assume this Program resides under a Source folder.
		string SourceDir = InnermostParentDirectoryPathWithName("Source", ProgramsDir);

		// The program is assumed to reside inside the "Engine" folder.
		string EngineDir = InnermostParentDirectoryPathWithName("Engine", SourceDir);

		// The default Binaries path is assumed to be a sibling of "Source" folder.
		string DefaultBinDir = Path.GetFullPath(Path.Combine(SourceDir, "..", "Binaries", Platform.ToString()));

		// We assume that the engine exe resides in Engine/Binaries/[Platform]
		string EngineBinariesDir = Path.Combine(EngineDir, "Binaries", Platform.ToString());

		// Now we calculate the relative path between the default output directory and the engine binaries,
		// in order to force the output of this program to be in the same folder as th engine.
		ExeBinariesSubFolder = (new DirectoryReference(EngineBinariesDir)).MakeRelativeTo(new DirectoryReference(DefaultBinDir));

		// Setting this is necessary since we are creating the binaries outside of Restricted.
		bLegalToDistributeBinary = true;

		// We still need to copy the resources, so at this point we might as well copy the files where the default Binaries folder was meant to be.
		// MobuLiveLinkPlugin.xml will be unaware of how the files got there.

		string ResourcesDir = Path.Combine(ProgramsDir, "MobuLiveLink", "Resources");
		string PostBuildBinDir = Path.Combine(DefaultBinDir, "MotionBuilder", InMobuVersionString);

		// Copy resources
		PostBuildSteps.Add(string.Format("echo Copying {0} to {1}...", ResourcesDir, PostBuildBinDir));
		PostBuildSteps.Add(string.Format("xcopy /y /i /v \"{0}\\*.*\" \"{1}\" 1>nul", ResourcesDir, PostBuildBinDir));

		// Copy binaries
		PostBuildSteps.Add(string.Format("echo Copying {0} to {1}...", EngineBinariesDir, PostBuildBinDir));
		PostBuildSteps.Add(string.Format("xcopy /y /i /v \"{0}\\{1}.*\" \"{2}\" 1>nul", EngineBinariesDir, LaunchModuleName, PostBuildBinDir));
	}
}

public class MobuLiveLinkPlugin2017Target : MobuLiveLinkPluginTargetBase
{
	public MobuLiveLinkPlugin2017Target(TargetInfo Target) : base(Target, "2017")
	{
		//Mobu is not strict c++ compliant before Mobu 2019 
		WindowsPlatform.bStrictConformanceMode = false;
	}
}
