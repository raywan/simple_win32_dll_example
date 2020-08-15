#include <windows.h>
#include <stdio.h>
#include <assert.h>
#include "module.h"

typedef void (*FP_MODULE_FUNC)(int, const char *);

int main(int argc, char *argv[]) {
#if defined(EXPLICIT_LINKING)
    HINSTANCE module_dll = LoadLibrary("module.dll");
    FP_MODULE_FUNC module_func = (FP_MODULE_FUNC) GetProcAddress(module_dll, "module_func");
    assert(module_func != NULL);
    module_func(1,"hellohello");
    FreeLibrary(module_dll);
#elif defined(IMPLICIT_LINKING)
    // NOTE(ray): Try to rename module.dll file and you'll see that this won't work anymore
    module_func(1,"hellohello");
#endif
    return 0;
}
