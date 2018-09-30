// dllmain.h : 模块类的声明。

class CATL_APIModule : public ATL::CAtlDllModuleT< CATL_APIModule >
{
public :
	DECLARE_LIBID(LIBID_ATL_APILib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATL_API, "{4F399204-8F47-4E82-B979-5E5C7A0C6D78}")
};

extern class CATL_APIModule _AtlModule;
