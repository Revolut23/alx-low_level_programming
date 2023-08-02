#include "main.h"
/**
 * _find_square - find natural square root
 *
 * @n : input number
 * @m : input number
 *
 * Return: square root of @n or -1
*/
int _find_square(int n, int m)
{
if (n * n == m)
return (n);
else if (n * n > m)
return (-1);
return (_find_square(n + 1, m));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (_find_square(1, n));
}
