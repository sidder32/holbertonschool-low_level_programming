#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - prints triangle
 * @size: size of square
 *
 * Return:
 */
void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
for (j = 0; j < size; j++)
{
for (i = 1; i < size - j; i++)
_putchar(' ');
for (i = size - j; i <= size; i++)
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}


