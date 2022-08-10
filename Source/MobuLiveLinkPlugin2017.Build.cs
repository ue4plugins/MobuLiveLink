// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public abstract class MobuLiveLinkPluginBase : ModuleRules
{
	public abstract string PyFullVerFloat();
	public abstract string PyVer();
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
			MobuInstallFolder = Path.Combine(MobuInstallFolder, "OpenRealitySDK");

			if (!Directory.Exists(MobuInstallFolder))
			{
				// Try with build machine setup
				string SDKRootEnvVar = System.Environment.GetEnvironmentVariable("UE_SDKS_ROOT");
				if (!string.IsNullOrEmpty(SDKRootEnvVar))
				{
					MobuInstallFolder = Path.Combine(SDKRootEnvVar, "HostWin64", "Win64", "MotionBuilder", MobuVersionString);
				}
			}

			PrivateDefinitions.Add($"FBPYTHON_VERSION ={PyVer()}");
			PrivateDefinitions.Add("MOBU_PYTHON_PLUGIN");

			// Make sure this version of Mobu is actually installed
			if (Directory.Exists(MobuInstallFolder))
			{
				PrivateIncludePaths.Add(Path.Combine(MobuInstallFolder, "include"));
				PrivateIncludePaths.Add(Path.Combine(MobuInstallFolder, "include\\pyfbsdk"));
				PrivateIncludePaths.Add(Path.Combine(MobuInstallFolder, "include\\boost"));
				PrivateIncludePaths.Add(Path.Combine(MobuInstallFolder, $"include\\python-{PyFullVerFloat()}\\include"));

				if (Target.Platform == UnrealTargetPlatform.Win64)  // @todo: Support other platforms?
				{
					string LibDir = Path.Combine(MobuInstallFolder, "lib/x64");
					string PyLibDir = Path.Combine(MobuInstallFolder, $"lib/x64/python{PyVer()}");

					// Mobu library we're depending on
					PublicAdditionalLibraries.Add(Path.Combine(LibDir, "fbsdk.lib"));
					PublicAdditionalLibraries.Add(Path.Combine(LibDir, $"boost_python{PyVer()}.lib"));
					PublicAdditionalLibraries.Add(Path.Combine(PyLibDir, "pyfbsdk.lib"));
				}
			}
		}
	}
}

public class MobuLiveLinkPlugin2017 : MobuLiveLinkPluginBase
{
	public override string PyFullVerFloat() => "2.7.6";
	public override string PyVer() => "27";
	public MobuLiveLinkPlugin2017(ReadOnlyTargetRules Target) : base(Target, "2017")
	{
	}
}
