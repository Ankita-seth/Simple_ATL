// FirstATL.h : Declaration of the CFirstATL

#pragma once
#include "resource.h"       // main symbols



#include "SimpleATL_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CFirstATL

class ATL_NO_VTABLE CFirstATL :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFirstATL, &CLSID_FirstATL>,
	public IObjectWithSiteImpl<CFirstATL>,
	public IFirstATL
{
public:
	CFirstATL()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)

DECLARE_NOT_AGGREGATABLE(CFirstATL)

BEGIN_COM_MAP(CFirstATL)
	COM_INTERFACE_ENTRY(IFirstATL)
	COM_INTERFACE_ENTRY(IObjectWithSite)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(AddNumbers)(long Num1, long Num2, long* ReturnVal);
};

OBJECT_ENTRY_AUTO(__uuidof(FirstATL), CFirstATL)
