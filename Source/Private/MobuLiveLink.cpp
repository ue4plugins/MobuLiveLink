

#include "RequiredProgramMainCPPInclude.h"

DEFINE_LOG_CATEGORY_STATIC(LogBlankMoBuPlugin, Log, All);

IMPLEMENT_APPLICATION(MobuLiveLinkPlugin, "MobuLiveLinkPlugin");


//--- SDK include
#pragma warning(push)
#include <fbsdk/fbsdk.h>
#pragma warning(pop)





class FMobuOutputDevice : public FOutputDevice
{
public:
	FMobuOutputDevice() : bAllowLogVerbosity(false) {}

	virtual void Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category) override
	{
		if ((bAllowLogVerbosity && Verbosity <= ELogVerbosity::Log) || (Verbosity <= ELogVerbosity::Display))
		{
			FBTrace("\nLog out now %s", V);
		}
	}

private:

	bool bAllowLogVerbosity;

};



//--- Library declaration
FBLibraryDeclare( MobuLiveLink )
{
	FBLibraryRegister( MobuLiveLink		);
	FBLibraryRegister( MobuLiveLinkLayout	);
}
FBLibraryDeclareEnd;

/************************************************
 *	Library functions.
 ************************************************/
bool FBLibrary::LibInit()	
{
	GEngineLoop.PreInit(TEXT("MobuLiveLinkPlugin -Messaging"));
	//FModuleManager::Get().LoadModule(TEXT("UdpMessaging"));

	ProcessNewlyLoadedUObjects();
	// Tell the module manager is may now process newly-loaded UObjects when new C++ modules are loaded
	FModuleManager::Get().StartProcessingNewlyLoadedObjects();

	FModuleManager::Get().LoadModule(TEXT("UdpMessaging"));
	//FModuleManager::Get().LoadModule(TEXT("LiveLink"));
	GLog->TearDown(); //clean up existing output devices
	GLog->AddOutputDevice(new FMobuOutputDevice()); //Add Mobu output device

	return true;
}

bool FBLibrary::LibOpen()	{ return true; }
bool FBLibrary::LibReady()	{ return true; }
bool FBLibrary::LibClose()	{ return true; }
bool FBLibrary::LibRelease(){ return true; }
