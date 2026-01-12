#include "func51.h"

double sum(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double myDiv(double a, double b)
{
    if(b == 0.0) {
        return NAN;
    } else {
        return a / b;
    }

}

double mul(double a, double b)
{
    return a * b;
}

double myPow(double a, double b)
{
    return pow(a, b);
}