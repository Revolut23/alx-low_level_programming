#include"main.h"

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
char rev;

while (start < end)
{
rev = a[start];
a[start] = a[end];
a[end] = rev;
start++;
end--;
}
}
