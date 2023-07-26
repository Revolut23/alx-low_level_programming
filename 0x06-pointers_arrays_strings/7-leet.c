#include"main.h"
/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/
char *leet(char *s)
{
int i, j;
char *given = "aAeEoOtTlL";
char *replace = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == given[j])
{
s[i] = replace[j];
}
}
}
return (s);
}
