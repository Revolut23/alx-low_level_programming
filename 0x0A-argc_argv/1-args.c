#include <stdlib.h>
#include <stdio.h>

/**
*main - Program that prints name
*@argc: number of arguments placed
*@argv: arrray of arguments placed
*Return: Always 0;
*/

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
