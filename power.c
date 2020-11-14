#include "myMath.h"

double Exponent(int x)
{
    double result = 1.0;
    int isNegative = 0;

    if (x < 0)
    {
        isNegative = 1;
        x *= -1;
    }

    for (int i = 0; i < x; ++i)
    {
        result *= EXPONENT;
    }

    if (isNegative == 1)
    {
        return (1.0 / result);
    }

    return result;
}

double Power(double x, int y)
{
    double result = 1.0;
    int isNegative = 0;

    if (y < 0)
    {
        isNegative = 1;
        y *= -1;
    }

    for (int i = 0; i < y; ++i)
    {
        result *= x;
    }

    if (isNegative == 1)
    {
        return (1.0 / result);
    }

    return result;
}