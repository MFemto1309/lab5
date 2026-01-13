#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <string.h>

void sort (
    void* base,
    size_t len,
    size_t size,
    void (*swap)(void*, void*),
    short (*cmp)(const void*, const void*)
);

void swapInt(void* a, void* b);
short cmpInt(const void* a, const void* b);

// Для double
void swapDouble(void* a, void* b);
short cmpDouble(const void* a, const void* b);

// Для строк (char*)
void swapStr(void* a, void* b);
short cmpStr(const void* a, const void* b);

#endif 