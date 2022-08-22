// dllmain.h : Declaration of module class.

class CSimpleATLModule : public ATL::CAtlDllModuleT< CSimpleATLModule >
{
public :
	DECLARE_LIBID(LIBID_SimpleATLLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SIMPLEATL, "{acdbeb24-1a5c-4876-96eb-688d842c7237}")
};

extern class CSimpleATLModule _AtlModule;
