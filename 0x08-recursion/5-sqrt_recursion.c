#include "main.h"

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: integer n
 * Return: 0;
*/

int _sqrt_recursion(int n)
{
    if (n < 0)
    return (-1);
    else if (n == 0)
    return (0);
    else
    return sqrt_num(n, 1);
}

/**
 * sqrt_num - return natural square root of a number
 * @n: integer n
 * @i: integer i
 * Return: 0;
*/

int sqrt_num(int n, int i)
{
    if (i * i > n)
    return (-1);
    else if (i * i == n)
    return i;
    else
    return sqrt_num(n, i + 1);
}

