#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
int i = 0, j;
char *rot13 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *ROT13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    
while(s[i] != '\0')
{
for (j = 0; j < 52; j++)
{
if (s[i] == rot13[j]){
s[i] = ROT13[j];
break;
}
}
i++;
}
return (s);
}