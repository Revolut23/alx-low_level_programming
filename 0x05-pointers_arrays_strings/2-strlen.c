#include"main.h"
/**
 * _strlen - returns lenght of a string
 * @s: string parameter output
 * Return: the lenght of string
*/
int _strlen(char *s)
{
int strlen = 0;

for (strlen = 0; *s != '\0'; s++)
{
	strlen++;
}
return (strlen);
}
