#include "sort.h"

void sort(
    void* base,
    size_t len,
    size_t size,
    void (*swap)(void*, void*),
    short (*cmp)(const void*, const void*)
) {
    if (!base || len < 2 || !swap || !cmp) return;

    char* arr = (char*)base;

    for (size_t i = 0; i < len - 1; ++i) {
        size_t min_idx = i;
        for (size_t j = i + 1; j < len; ++j) {
            void* elem_j = arr + j * size;
            void* elem_min = arr + min_idx * size;
            if (cmp(elem_j, elem_min) < 0) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            void* elem_i = arr + i * size;
            void* elem_min = arr + min_idx * size;
            swap(elem_i, elem_min);
        }
    }
}

// --- int ---
void swapInt(void* a, void* b) {
    int tmp = *(int*)a;
    *(int*)a = *(int*)b;
    *(int*)b = tmp;
}

short cmpInt(const void* a, const void* b) {
    int ia = *(const int*)a;
    int ib = *(const int*)b;
    if (ia < ib) return -1;
    if (ia > ib) return 1;
    return 0;
}

// --- double ---
void swapDouble(void* a, void* b) {
    double tmp = *(double*)a;
    *(double*)a = *(double*)b;
    *(double*)b = tmp;
}

short cmpDouble(const void* a, const void* b) {
    double da = *(const double*)a;
    double db = *(const double*)b;
    if (da < db) return -1;
    if (da > db) return 1;
    return 0;
}

// --- строки (char*) ---
void swapStr(void* a, void* b) {
    char* tmp = *(char**)a;
    *(char**)a = *(char**)b;
    *(char**)b = tmp;
}

short cmpStr(const void* a, const void* b) {
    const char* sa = *(const char**)a;
    const char* sb = *(const char**)b;
    return (short)strcmp(sa, sb); // strcmp возвращает int, но short достаточно для знака
}