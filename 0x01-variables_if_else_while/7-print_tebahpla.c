#include<stdio.h>
/**
 * main - First point
 * program reverse alphabet print
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	for (c  = 'z'; c  >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
