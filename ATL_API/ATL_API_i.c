

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sun Sep 30 22:51:36 2018
 */
/* Compiler settings for ATL_API.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IComponentRegistrar,0xa817e7a2,0x43fa,0x11d0,0x9e,0x44,0x00,0xaa,0x00,0xb6,0x77,0x0a);


MIDL_DEFINE_GUID(IID, IID_IAPI_COM,0x66C5FCF9,0x15B3,0x47BE,0x99,0xDE,0xE6,0xC6,0x76,0x69,0x45,0x61);


MIDL_DEFINE_GUID(IID, LIBID_ATL_APILib,0x709F4F00,0xCA54,0x44D8,0xA5,0xE5,0xAB,0x41,0x91,0x8A,0x4B,0xDA);


MIDL_DEFINE_GUID(CLSID, CLSID_CompReg,0x47107176,0xF049,0x4BDC,0x86,0x1B,0x82,0x4F,0x46,0x94,0xEE,0xCC);


MIDL_DEFINE_GUID(IID, DIID__IAPI_COMEvents,0x950209E1,0x669C,0x4D49,0xB7,0xAC,0xB9,0xCF,0x5C,0x08,0xA5,0x29);


MIDL_DEFINE_GUID(CLSID, CLSID_API_COM,0xCD830E3F,0x52E6,0x4DEC,0x98,0x08,0xAB,0xEA,0x2D,0x39,0x23,0x1E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



