#include<stdio.h>
/**
 * main - First point
 * program which prints all single numbers base 10
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
