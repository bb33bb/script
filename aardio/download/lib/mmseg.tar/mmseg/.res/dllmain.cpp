#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <SDKDDKVer.h>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

/*
此DLL源码基于rmmseg
https://github.com/binux/binux-tools/tree/master/python/pymmseg
作者：pluskid 开源许可证：MIT
*/
