# MobuLiveLink

Currently only built and tested with Unreal 4.18.1 and Mobu 2017

Known issues:

	Changing objects in the Scene are not always reflected in the Device
	Selecting objects in a heirarchy only adds the first supported Item type
		If you want to add a skeleton select the root bone. If you select the group above you'll just stream a null rather than the actual Skeleton.
	Subject names have no collision check. Adding the same subject name twice will cause issues.
	Currently no way to change evaluation rate or Timecode source
	Cameras and Lights only stream their transform, adding their properties soon.
		
Build instructions:

	You will require a source build of Unreal

	The repo should be in a folder inside of <engine install folder>\Engine\Source\Programs
	
	run GenerateProjectFiles.bat, you should now have a new program you can build in your UE4 solution
	
	Currently there are a few hardcoded paths that I need to resolve:
	
		In the .build.cs you will need to set your Mobu version (MobuVersionString) and the path to the install folder (MobuInstallFolder)

		The path to the device Icon is hardcoded as I'm not sure where it does relative paths from. For now ignore and you will get a default I/O Icon
	
Mobu plugin Install instructions:

	Open Mobu
	settings -> preferences -> sdk -> add
	Path to add: <engine install folder>\Engine\Binaries\Win64\MotionBuilder
	Restart Mobu
	Should now have a UE - Livelink device in your asset browser
	

