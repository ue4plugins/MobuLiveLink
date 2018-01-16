# MobuLiveLink

Currently built and tested with Unreal 4.18.1, 4.19p1 and MotionBuilder 2016, 2017, 2018

Known issues:

	Selecting objects in a heirarchy only adds the first supported Item type
		If you want to add a skeleton select the root bone. If you select the group above you'll just stream a null rather than the actual Skeleton.
	Subject names have no collision check. Adding the same subject name twice will cause issues.
	Currently no way to change evaluation rate or Timecode source
	Cameras stream their parameters (FOV, etc.) however Lights only stream their transform, adding their properties soon.
		
Setup instructions:

	See the Getting Started section on the Wiki: https://github.com/DrHibbitts/MobuLiveLink/wiki/Getting-Started
	
