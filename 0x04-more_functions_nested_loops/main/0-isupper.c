#include"main.h"

/**
 * int _isupper: Function that checks for uppercase characters
 * @c: the main character
 * return: 0 when its lower case otherwise return 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}		
}
