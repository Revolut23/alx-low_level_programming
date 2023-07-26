#include"main.h"
/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: @s
*/
char *cap_string(char *s)
{
int i = 0;

if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
while (s[i] != '\0')
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
|| s[i] == '.' || s[i] == '!'
|| s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
|| s[i] == '}')
{
i++;
}
if (s[i] >= 97 && s[i] <= 122)
s[i] -= 32;
i++;
}
return (s);
}
