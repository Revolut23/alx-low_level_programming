#include <stdio.h>
/**
 * main - print program name , followed by new line
 * @argc: int
 * @argv: int
 * Return: 0
*/
int main(int argc, char const *argv[])
{
int i = 0;
(void) argc;

while (argv[0][i] != '\0')
{
putchar(argv[0][i]);
i++;
}
putchar('\n');
return (0);
}
