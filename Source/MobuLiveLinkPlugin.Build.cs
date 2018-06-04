// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MobuLiveLinkPlugin : ModuleRules
{
	public MobuLiveLinkPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		bEnforceIWYU = false;
        bUseRTTI = true;

		PrivateIncludePaths.AddRange( new string[] 
		{
			"Runtime/Launch/Public",
			"Runtime/Launch/Private",
			Path.Combine(ModuleDirectory, "StreamObjects/Public")
		}  );

		// Unreal dependency modules
		PrivateDependencyModuleNames.AddRange( new string[] 
		{
			"Core",
			"CoreUObject",
			"ApplicationCore",
			"Projects",
			"UdpMessaging",
			"LiveLinkInterface",
			"LiveLinkMessageBusFramework",
		} );

		//
		// Mobu SDK setup
		//

		{
			string MobuVersionString = "2017";
			string MobuInstallFolder = @"D:\Programs\Autodesk\MotionBuilder " + MobuVersionString;

			// Make sure this version of Mobu is actually installed
			if (Directory.Exists(MobuInstallFolder))
			{
				PrivateIncludePaths.Add(Path.Combine(MobuInstallFolder, "OpenRealitySDK/include"));

				if (Target.Platform == UnrealTargetPlatform.Win64)  // @todo: Support other platforms?
				{
					PublicLibraryPaths.Add(Path.Combine(MobuInstallFolder, "OpenRealitySDK/lib/x64"));

					// Mobu library we're depending on
					PublicAdditionalLibraries.AddRange(new string[]
						{
							"fbsdk.lib",
						}
					);
				}
			}
		}
	}
}
