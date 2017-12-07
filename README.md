# MobuLiveLink

Currently only built and tested with Unreal 4.18.1 and Mobu 2017

Known issues:

	Currently there is a Visual C++ Runtime error when you close Motionbuilder 

Build instructions:

	You will require a source build of Unreal

	The repo should be in a folder inside of <engine install folder>\Engine\Source\Programs
	
	run GenerateProjectFiles.bat, you should now have a new program you can build in your UE4 solution
	
	Currently there are a few hardcoded paths that I need to resolve:
	
		In the .build.cs you will need to set your Mobu version (MobuVersionString) and the path to the install folder (MobuInstallFolder)
		
		In the .target.cs you will need to do the same as well as specifying the root for where your program is stored (ModuleDirectory)
	
Mobu plugin Install instructions:

	Open Mobu
	settings -> preferences -> sdk -> add
	Path to add: <engine install folder>\Engine\Binaries\Win64\MotionBuilder
	Restart Mobu
	Should now have a UE - Livelink device in your asset browser
	

