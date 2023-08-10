#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *rng, i = 0;
	int size = max - min + 1;

	if (min > max)
	return (NULL);
	rng = malloc(size * sizeof(int));
	if (rng == NULL)
	return (NULL);
	while (i < size)
	{
		rng[i] = min + i;
		i++;
	}
	return (rng);
}
