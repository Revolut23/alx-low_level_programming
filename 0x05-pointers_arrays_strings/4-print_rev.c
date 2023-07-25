#include"main.h"
#include<string.h>
/**
 * print_rev - prints string in reverse
 * @s: string to be printed in reverse
*/
void print_rev(char *s)
{
int n;

for (n = 0; s[n] != '\0'; n++)
;
for (--n; n >= 0; --n)
_putchar(s[n]);
_putchar('\n');
}
