#pragma once

#ifdef DLLREAD_EXPORTS
#define DLLREAD_API __declspec(dllexport)
#else
#define DLLREAD_API __declspec(dllexport)
#endif

extern "C" DLLREAD_API void __stdcall read();
