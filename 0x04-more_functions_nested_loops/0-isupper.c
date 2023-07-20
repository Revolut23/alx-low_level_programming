#include"main.h"

/**
 * int _isupper: Function checks for uppercase
 * @c: character checked
 * Return: if the character is uppercase return 1
 otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
