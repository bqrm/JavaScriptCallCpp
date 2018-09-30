/***************************************************
 * @file		Test_API.cpp
 * @section		Dll_Cpp
 * @class		N/A
 * @brief		implementation for integration of code
 * @author		bqrmtao@gmail.com
 * @date		2018/09/30 23:24
 * @version		1.0
 * @copyright	bqrmtao@gmail.com
***************************************************/

#include "Test_API.h"
#include "TestFunc.h"

using namespace std;

long API_Add(long a, long b)
{
	return TestFunc::GetInstance()->FuncAdd(a, b);
}