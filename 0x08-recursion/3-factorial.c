#include "main.h"

/**
 * factorial - return factorial of a number
 * @n: integer number
 * Return: factorial of a number
*/

int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
