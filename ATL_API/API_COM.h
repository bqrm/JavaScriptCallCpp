// API_COM.h : CAPI_COM ������

#pragma once
#include "resource.h"       // ������



#include "ATL_API_i.h"
#include "_IAPI_COMEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
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
