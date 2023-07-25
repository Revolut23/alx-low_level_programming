#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/
void puts_half(char *str)
{
int len = strlen(str);
int n = (len - 1) / 2;
int i = n;

while (i <= len)
{
i++;
putchar(str[i]);
}
putchar('\n');
}
