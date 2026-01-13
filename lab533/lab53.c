#include <stdio.h>
#include "func.h"

int main(void) {
    const char* (*funcs[])(void) = {
        getString,
        getAnotherString,
        getFullname,
        getAddress
    };

    size_t numFuncs = sizeof(funcs) / sizeof(funcs[0]);   

    for (size_t i = 0; i < numFuncs; ++i) {
        printf("[%zu] %s\n", i, funcs[i]());
    }

    printf("\nCall for funcs[2](): %s\n", funcs[2]());

    return 0;
}