#include"main.h"
/**
 * swap_int - function that swaps the values of two integers
 *            using two input parameter.
 * @a: input parameter 1
 * @b: input parameter 2
*/
void swap_int(int *a, int *b)
{
int swp;

swp = *a;
*a = *b;
*b = swp;
}
