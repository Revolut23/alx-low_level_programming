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
	j++;
	}
	s = malloc(j * sizeof(*str) + 1);
	if (s == 0)
	return (NULL);
	else
	{
		while (str[i] != '\0')
		{
			s[i] = str[i];
			i++;
		}
	}
	return (s);
}
