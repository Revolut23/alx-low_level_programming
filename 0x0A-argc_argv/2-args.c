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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
