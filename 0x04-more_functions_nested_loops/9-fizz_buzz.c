#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz
 * for multiples of both 3 and 5. Otherwise, prints the number.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		(n % 3 == 0) ? printf("Fizz") : 0;
		(n % 5 == 0) ? printf("Buzz") : 0;
		(n % 3 != 0 && n % 5 != 0) ? printf("%d", n) : 0;
		(n != 100) ? printf(" ") : 0;
	}
	printf("\n");
	return (0);
}
