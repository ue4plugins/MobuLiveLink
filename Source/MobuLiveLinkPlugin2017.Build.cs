// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public abstract class MobuLiveLinkPluginBase : ModuleRules
{
	private string version;
	public string Version
	{
		get { return version; }
		set { version = value; }
	}
	abstract public string PythonFullVersion
	{
		get;
	}
	abstract public string PythonVersion
	{
		get;
	}

	private string moBuInstallFolder;
	public string MotionBuilderInstallFolder
	{
		get { return moBuInstallFolder; }
		set { moBuInstallFolder = value; }
	}

	private string moBuOpenRealitySDK;
	public string MotionBuilderOpenRealitySDK
	{
		get { return moBuOpenRealitySDK; }
		set { moBuOpenRealitySDK = value; }
	}
	public MobuLiveLinkPluginBase(ReadOnlyTargetRules Target, string MobuVersionString) : base(Target)
	{
		PrivatePCHHeaderFile = "Private/MobuLiveLinkPluginPrivatePCH.h";

		bEnforceIWYU = false;
		bUseRTTI = true;
		

		PrivateIncludePaths.AddRange(new string[]
		{
			Path.Combine(EngineDirectory, "Source/Runtime/Launch/Public"),
			Path.Combine(EngineDirectory, "Source/Runtime/Launch/Private"),
			Path.Combine(ModuleDirectory, "StreamObjects/Public"),
		});

		// Unreal dependency modules
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"ApplicationCore",
			"Messaging",
			"Projects",
			"UdpMessaging",
			"LiveLinkInterface",
			"LiveLinkMessageBusFramework",
		});

		// Mobu SDK setup
		{
			//UE_MOTIONBUILDER2017_INSTALLATIONFOLDER
			string MobuInstallFolder = System.Environment.GetEnvironmentVariable("UE_MOTIONBUILDER" + MobuVersionString + "_INSTALLATIONFOLDER");
			
			if (string.IsNullOrEmpty(MobuInstallFolder))
			{
				MobuInstallFolder = @"C:\Program Files\Autodesk\MotionBuilder " + MobuVersionString;
			}
			MotionBuilderInstallFolder = MobuInstallFolder;
			// now MobuInstallFolder is actually MotionBuilder's SDK folder
			MobuInstallFolder = Path.Combine(MobuInstallFolder, "OpenRealitySDK");
			MotionBuilderOpenRealitySDK = MobuInstallFolder;

			if (!Directory.Exists(MobuInstallFolder))
			{
				// Try with build machine setup
				string SDKRootEnvVar = System.Environment.GetEnvironmentVariable("UE_SDKS_ROOT");
				if (!string.IsNullOrEmpty(SDKRootEnvVar))
				{
					MobuInstallFolder = Path.Combine(SDKRootEnvVar, "HostWin64", "Win64", "MotionBuilder", MobuVersionString);
				}
			}

			// Make sure this version of Mobu is actually installed
			if (Directory.Exists(MobuInstallFolder))
			{
				PrivateIncludePaths.Add(Path.Combine(MobuInstallFolder, "include"));

				if (Target.Platform == UnrealTargetPlatform.Win64)  // @todo: Support other platforms?
				{
					string LibDir = Path.Combine(MobuInstallFolder, "lib/x64");

					// Mobu library we're depending on
					PublicAdditionalLibraries.Add(Path.Combine(LibDir, "fbsdk.lib"));
					PublicAdditionalLibraries.Add(Path.Combine(LibDir, "libfbxsdk-adsk.lib"));
				}
			}
		}
	}
	public void IncludePyFbSdkVersionSpecific()
	{
		if (Directory.Exists(MotionBuilderOpenRealitySDK))
		{
			string pyFbSdkIncludeFolder = Path.Combine(MotionBuilderOpenRealitySDK, "include\\pyfbsdk");
			PrivateIncludePaths.Add(pyFbSdkIncludeFolder);
			if (Target.Platform == UnrealTargetPlatform.Win64)  // @todo: Support other platforms?
			{
				string pyFbSdkLibDir = Path.Combine(MotionBuilderOpenRealitySDK, $"lib\\x64\\python{PythonVersion}");
				// Mobu library we're depending on
				PublicAdditionalLibraries.Add(Path.Combine(pyFbSdkLibDir, "pyfbsdk.lib"));
			}
		}
	}

	public void IncludePythonBoostVersionSpecific()
	{
		if (Directory.Exists(MotionBuilderOpenRealitySDK))
		{
			string pythonBoostIncludeFolder = Path.Combine(MotionBuilderOpenRealitySDK, "include\\boost");
			PrivateIncludePaths.Add(pythonBoostIncludeFolder);
			string pythonIncludeFolder = Path.Combine(MotionBuilderOpenRealitySDK, $"include\\python-{PythonFullVersion}\\include");
			PrivateIncludePaths.Add(pythonIncludeFolder);
			if (Target.Platform == UnrealTargetPlatform.Win64)
			{
				string pythonBoostLibPath = Path.Combine(MotionBuilderOpenRealitySDK, $"lib\\x64\\boost_python{PythonVersion}.lib");
				PublicAdditionalLibraries.Add(pythonBoostLibPath);
			}
		}
	}
}

public class MobuLiveLinkPlugin2017 : MobuLiveLinkPluginBase
{
	readonly private string pythonFullVersion = "2.7.6";
	public override string PythonFullVersion => pythonFullVersion;
	readonly private string pythonVersion = "27";
	public override string PythonVersion => pythonVersion;
	public MobuLiveLinkPlugin2017(ReadOnlyTargetRules Target) : base(Target, "2017")
	{
	}
}
