#include "main.h"

/**
 * _pow_recursion - return x raised of the power of y
 * @x: integer x
 * @y: integer y
 * Return: power of @x by @y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	else
	return (x * _pow_recursion(x, y - 1));
}
