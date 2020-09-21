#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet_x10- prints 10 times alphabet in lowercase
 * The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_alphabet_x10(void)
{
int i;
int j;
for (i = 0 ; i < 10 ; ++i)
{
for (j = 'a' ; j <= 'z' ; ++j)
{
_putchar(j);
}
_putchar('\n');
}
return (0);
}
