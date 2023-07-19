#include "main.h"
#include<stdio.h>
/**
 * main - check the code
 * print_to_98 : PRINT ALL NUMBER TO IMPUT ç_
 * @n: Starting number to count
 */
void print_to_98(int n);
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
