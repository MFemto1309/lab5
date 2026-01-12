#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func51.h"

typedef double (*operation)(double, double);

int main(void) {
    char op;
    double a, b;
    operation operFunction = NULL;

    printf("=== Calculator ===\n");
    printf("Operations: + - * / ^\n");
    printf("Enter 'q' instead of the operator to quit.\n");

    while (1) {
        printf("Number 1: ");
        if (scanf("%lf", &a) != 1) {
            printf("Incorrect number.\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Operation: ");
        if (scanf(" %c", &op) != 1) {
            printf("Operation input error.\n");
            while (getchar() != '\n');
            continue;
        }

        if (op == 'q' || op == 'Q') break;

        switch (op) {
            case '+': operFunction = sum; break;
            case '-': operFunction = sub; break;
            case '*': operFunction = mul; break;
            case '/': operFunction = myDiv; break;
            case '^': operFunction = myPow; break;
            default:
                printf("Unknown operation '%c'\n", op);
                while (getchar() != '\n');
                continue;
        }

        printf("Number 2: ");
        if (scanf("%lf", &b) != 1) {
            printf("Incorrect number.\n");
            while (getchar() != '\n');
            continue;
        }

        double result = operFunction(a, b);
        if (isnan(result)) {
            printf("Error: result is undefined (e.g. division by zero)\n\n");
        } else {
            printf("Result: %.6g\n\n", result);
        }
    }

    printf("See Ya!\n");
    return 0;
}
