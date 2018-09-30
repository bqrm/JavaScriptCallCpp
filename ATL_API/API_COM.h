// API_COM.h : CAPI_COM 的声明

#pragma once
#include "resource.h"       // 主符号



#include "ATL_API_i.h"
#include "_IAPI_COMEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;


// CAPI_COM

class ATL_NO_VTABLE CAPI_COM :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAPI_COM, &CLSID_API_COM>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CAPI_COM>,
	public CProxy_IAPI_COMEvents<CAPI_COM>,
	public IObjectWithSiteImpl<CAPI_COM>,
	public IDispatchImpl<IAPI_COM, &IID_IAPI_COM, &LIBID_ATL_APILib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CAPI_COM()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_API_COM)


BEGIN_COM_MAP(CAPI_COM)
	COM_INTERFACE_ENTRY(IAPI_COM)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(IObjectWithSite)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CAPI_COM)
	CONNECTION_POINT_ENTRY(__uuidof(_IAPI_COMEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(Add)(LONG argv1, LONG argv2, LONG* retval);
};

OBJECT_ENTRY_AUTO(__uuidof(API_COM), CAPI_COM)
