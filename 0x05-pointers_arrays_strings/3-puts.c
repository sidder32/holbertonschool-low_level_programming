#include <stdio.h>
#include "holberton.h"
/**
 * _puts - prints a string
 * @str : string
 *
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str = str + 1;
}
_putchar('\n');
}
