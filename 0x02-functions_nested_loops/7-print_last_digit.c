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
g = n % 10;
if (g <= 0)
g = g * (-1);
_putchar('0' + g);
return (g);
}
