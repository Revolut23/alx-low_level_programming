#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cct;
	unsigned int s1_length = 0, s2_length = 0, i;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}
	while (s2[s2_length] != '\0')
	{
		s2_length++;
	}
	if (n > s2_length)
	n = s2_length;
	cct = malloc((s1_length + n + 1) * sizeof(char));
	if (cct == NULL)
	return (0);
	for (i = 0; i < s1_length; i++)
	{
		cct[i] = s1[i];
	}
	for (; i < (s1_length + n); i++)
	{
		cct[i] = s2[i - s1_length];
	}
	cct[i] = '\0';
	return (cct);
}
