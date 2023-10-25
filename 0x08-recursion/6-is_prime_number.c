#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: int n
 * Return: 1 if the number is prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	else
	return (is_prime(n, n / 2));
}

/**
 * is_prime - calculates if a number is prime
 * @n: number evaluated
 * @i: iteration
 * Return: 1 if the number is prime, 0 otherwise
*/

int is_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0)
	return (0);
	else
	return (is_prime(n, i - 1));
}
