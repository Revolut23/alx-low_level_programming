#include"main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
unsigned int pn;
pn = n;
if (n < 0)
{
_putchar('-');
pn = -n;
}
if (pn / 10)
{
print_number(pn / 10);
}
_putchar((pn % 10) + '0');
}
