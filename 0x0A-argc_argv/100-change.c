#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: int
 * @argv: array pointer
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
int ryal, drahem = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
ryal = atoi(argv[1]);
while (ryal > 0)
{
drahem++;
if ((ryal - 25) >= 0)
{
ryal -= 25;
continue;
}
if ((ryal - 10) >= 0)
{
ryal -= 10;
continue;
}
if ((ryal - 5) >= 0)
{
ryal -= 5;
continue;
}
if ((ryal - 2) >= 0)
{
ryal -= 2;
continue;
}
ryal--;
}
printf("%d\n", drahem);
return (0);
}
