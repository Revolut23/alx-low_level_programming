#include"main.h"
#include<string.h>
/**
 * rev_string - reverse a string
 * @s: reversed parameter
 * Return: string in reverse
*/
void rev_string(char *s)
{
char rev;
int i = 0;
int j;

while (s[i] != '\0')
i++;
for (j = 0; j < i; j++)
{
i--;
rev = s[j];
s[j] = s[i];
s[i] = rev;
}
}
