#include "func51.h"
#include <math.h>
#define MINDOUBLE 2.2204460492503131e-16 //DBL_EPSILON из float.h

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
    if(fabs(b) <= MINDOUBLE) {
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