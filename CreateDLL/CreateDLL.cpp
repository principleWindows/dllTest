// CreateDLL.cpp : Defines the exported functions for the DLL.

// ���йܶ�̬���ӿ�DLL�Ĵ�������:
// <3> ��cppԴ�����ļ�������ͷ�ļ�����ʵ�ֺ���

#include "pch.h"
#include "CreateDLL.h"

int __stdcall testAdd( int a, int b )
{
	return	a + b;
}

int __stdcall testMulti( int a, int b )
{
	return	a * b;
}
