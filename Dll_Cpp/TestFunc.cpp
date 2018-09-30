/***************************************************
 * @file		TestFunc.cpp
 * @section		Dll_Cpp
 * @class		TestFunc
 * @brief		main function of cpp dll
 * @author		bqrmtao@gmail.com
 * @date		2018/09/30 23:22
 * @version		1.0
 * @copyright	bqrmtao@gmail.com
***************************************************/

#include <mutex>

#include "TestFunc.h"

using namespace std;

TestFunc* TestFunc::m_pInstance = nullptr;
TestFunc::Garbo TestFunc::oGarbo;

mutex m_oTestFuncLock;

TestFunc::TestFunc()
{
}

TestFunc::~TestFunc()
{
}

TestFunc* TestFunc::GetInstance()
{
	if (nullptr == m_pInstance)
	{
		m_oTestFuncLock.lock();
		if (nullptr == m_pInstance)
		{
			m_pInstance = new TestFunc();
		}
		m_oTestFuncLock.unlock();
	}

	return m_pInstance;
}

int TestFunc::FuncAdd(int a, int b)
{
	return a + b;
}