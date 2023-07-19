#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * separated with comma and end in a new line
 * @n: Starting number to count
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
