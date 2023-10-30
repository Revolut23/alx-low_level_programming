#include "main.h"

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: string
 * Returns: 1 if the string is a palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	int len = strlen(s);
	char *go = s;
	char *back = s + len - 1;

}