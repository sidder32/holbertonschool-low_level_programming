#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - draw diagonal line in terminal
 * @n: param n
 *
 * Return: ,
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}


