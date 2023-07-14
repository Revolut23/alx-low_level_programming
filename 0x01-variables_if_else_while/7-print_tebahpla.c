#include<stdio.h>
/**
 * main - First point
 * program reverse alphabet print
 * Return: Always 0 (Success)
*/
int main(void)
{
	for (char c = 'z'; char c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
