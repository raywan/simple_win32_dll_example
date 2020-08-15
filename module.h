#ifndef __MODULE_H__
#define __MODULE_H__

#if defined(EXPORT_DLL)
#define DLL_FUNC __declspec(dllexport)
#else
#define DLL_FUNC __declspec(dllimport)
#endif

extern "C" {
DLL_FUNC void module_func(int x, const char *str);
}

#endif
