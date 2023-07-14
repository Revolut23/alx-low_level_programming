#include <stdio.h>

/**
 * main - First point
 *
 * Description: A C program that prints a quote
 *
 * Return: For This Case we return an error 1.
 */

int main(void)
{
	char quo[] =  "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";


	write(sizeof(quo), sizeof(char));
	return (1);
}
