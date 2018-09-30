// API_COM.cpp : CAPI_COM 的实现

#include "stdafx.h"
#include "API_COM.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	_declspec(dllimport) long API_Add(long a, long b);

#ifdef __cplusplus
};
#endif // __cplusplus

// CAPI_COM

STDMETHODIMP CAPI_COM::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IAPI_COM
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CAPI_COM::Add(LONG argv1, LONG argv2, LONG* retval)
{
	// TODO: 在此添加实现代码

	*retval = API_Add(argv1, argv2);
	return S_OK;
}
