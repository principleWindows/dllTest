// CreateDLL.h - Contains declarations of unmanaged dll functions
#pragma once

#ifdef CREATEDLL_EXPORTS
#define CREATEDLL_API __declspec(dllexport)
#else
#define CREATEDLL_API __declspec(dllimport)
#endif

// ���йܶ�̬���ӿ� DLL �Ĵ�������:
// <1> ����C++������Ŀ����Ŀ����Ϊ��⣬����Ϊ CreateDLL

// <2> ��ͷ�ļ�����������ԭ��
extern "C" CREATEDLL_API int __stdcall testAdd (int a, int b);
extern "C" CREATEDLL_API int __stdcall testMulti (int a, int b);
