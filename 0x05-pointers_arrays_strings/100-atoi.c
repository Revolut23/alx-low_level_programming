#include"main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
*/
int _atoi(char *s) 
{
int s = 1;
int r = 0;
int i = 0;

if (s[i] == '-') 
{
s = -1;
i++;
}
else if (s[i] == '+') 
{
i++;
}
while (s[i] != '\0') 
{
if (s[i] < '0' || s[i] > '9') 
{
break;
}
r = r * 10 + (s[i] - '0');
i++;
}
return (s) * (r);
}
