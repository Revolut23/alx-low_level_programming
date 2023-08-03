#include "main.h"
/**
 * verify_prime - check if the number is prime
 * @n: int
 * @m: int
 * Return: number
*/
int verify_prime(int n, int m)
{
if (m < 2 || m % n == 0)
return (0);
else if (n > m / 2)
return (1);
else
return (verify_prime(n + 1, m));
}
/**
 * is_prime_number - checks to see if number is prime
 * @n:input number
 * Return: input number
 */
int is_prime_number(int n)
{
{
if (n == 2)
{
return (1);
}
}
return (verify_prime(2, n));
}
