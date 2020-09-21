#include <unistd.h>
#include "holberton.h"

/**
 * print_last_digit - print and return the last digit
 * @n : imput parameter
 *
 * Return: 1 return last digit value of n,
 */
int print_last_digit(int n)
{
int g;
if (n < 0)
n = n * -1;
g = n % 10;
_putchar('0' + g);
return (g);
}
