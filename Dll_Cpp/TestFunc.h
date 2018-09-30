/***************************************************
 * @file		TestFunc.h
 * @section		Dll_Cpp
 * @class		TestFunc
 * @brief		main function of cpp dll
 * @author		bqrmtao@gmail.com
 * @date		2018/09/30 23:22
 * @version		1.0
 * @copyright	bqrmtao@gmail.com
***************************************************/

/* __DEF_MACRO_H__ */
#ifndef __TEST_FUNC_H__
#define __TEST_FUNC_H__

class TestFunc
{
public:
	static TestFunc* GetInstance();

	int FuncAdd(int a, int b);

private:
	TestFunc();
	~TestFunc();

	// to destroy singleton
	class Garbo
	{
	public:
		~Garbo()
		{
			if (nullptr != m_pInstance)
			{
				delete m_pInstance;
				m_pInstance = nullptr;
			}
		}
	};

	static TestFunc* m_pInstance;
	static Garbo oGarbo;
};

#endif	// __TEST_FUNC_H__