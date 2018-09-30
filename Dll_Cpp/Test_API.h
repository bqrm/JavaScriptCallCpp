/***************************************************
 * @file		Test_API.h
 * @section		Dll_Cpp
 * @class		N/A
 * @brief		header for integration of code
 * @author		bqrmtao@gmail.com
 * @date		2018/09/30 23:24
 * @version		1.0
 * @copyright	bqrmtao@gmail.com
***************************************************/

/* __DEF_MACRO_H__ */
#ifndef __TEST_API_H__
#define __TEST_API_H__

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	_declspec(dllexport) long API_Add(long a, long b);

#ifdef __cplusplus
};
#endif // __cplusplus

#endif	// __TEST_API_H__