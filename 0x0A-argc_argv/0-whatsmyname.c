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
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);

}
