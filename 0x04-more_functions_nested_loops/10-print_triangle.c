#include "main.h"

/**
 * print_triangle - entry point
 * owned by Bwave/Bright Daniel
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int r, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (r = 1; r <= size; r++)
	{
		for (h = 1; h <= size; h++)
		{
			if (h > size - r)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
