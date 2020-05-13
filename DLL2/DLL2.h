#pragma once
//#include "stdafx.h"

#ifdef __cplusplus
#define EXTERN_C    extern "C"
#else
#define EXTERN_C    extern
#endif


#ifdef DLL2_EXPORT
#define DLL2_API __declspec(dllexport)
#else
#define DLL2_API __declspec(dllexport)
#endif

EXTERN_C DLL2_API int Test1();