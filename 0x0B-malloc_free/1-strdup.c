#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
	return (NULL);
	while (str[j] != '\0')
	{
	s = malloc(j * sizeof(*str) + 1);
	j++;
	}
	if (s == 0)
	return (NULL);
	else
	{
		while (i < j)
		{
			s[i] = str[i];
			i++;
		}
	}
	return (s);
}
