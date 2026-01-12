#include <stdio.h>
#include "sort.h"

int main(void) {
    int a[] = {5, 7, 3, -1, 2, 3};
    size_t aLen = sizeof(a) / sizeof(a[0]);

    char* arStr[] = {"QQQ", "SDF", "ABC", "Hello", "World", "C"};
    size_t sLen = sizeof(arStr) / sizeof(arStr[0]);

    double d[] = {3.14, -2.5, 0.0, 10.1, -0.001};
    size_t dLen = sizeof(d) / sizeof(d[0]);

    ////////////////////////////////////////////////////////////

    printf("Before (int): ");
    for (int i = 0; i < aLen; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");

    sort(a, aLen, sizeof(int), swapInt, cmpInt);

    printf("After (int):  ");
    for (int i = 0; i < aLen; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    ////////////////////////////////////////////////////////////

    printf("Before (double): ");
    for (size_t i = 0; i < dLen; ++i) {
        printf("%.3f ", d[i]);
    }
    printf("\n");

    sort(d, dLen, sizeof(double), swapDouble, cmpDouble);

    printf("After (double):  ");
    for (size_t i = 0; i < dLen; ++i) {
        printf("%.3f ", d[i]);
    }
    printf("\n\n");

    /////////////////////////////////////////////////////////////

    printf("Before (strings): ");
    for (size_t i = 0; i < sLen; ++i) {
        printf("%s ", arStr[i]);
    }
    printf("\n");

    sort(arStr, sLen, sizeof(char*), swapStr, cmpStr);

    printf("After (strings):  ");
    for (size_t i = 0; i < sLen; ++i) {
        printf("%s ", arStr[i]);
    }
    printf("\n");

    return 0;
}