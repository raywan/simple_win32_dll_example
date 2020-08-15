#define EXPORT_DLL
#include "module.h"
#include <stdio.h>

void module_func(int x, const char *str) {
    printf("THIS IS A FUNCTION FROM THE DLL: %d, %s\n", x, str);
}
