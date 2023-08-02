#include "main.h"

/**
 * is_prime_number - checks to see if number is prime
 * @n:input number
 * Return: input number
 */
int is_prime_number(int n)
{
int i;

if (n <= 1)
return (0);
for (i = 2; i * i <= n; i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
