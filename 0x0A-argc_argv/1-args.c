#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
*@argc: int
*@argv: int
*Return: Always 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
(void) argv;

printf("%d\n", argc - 1);
return (0);
}
