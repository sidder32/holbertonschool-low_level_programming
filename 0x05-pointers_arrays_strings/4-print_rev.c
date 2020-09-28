#include <stdio.h>
#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s : string in reverse
 *
 */
void print_rev(char *s)
{
int length = 0;
char *t;
t = s;
int i;
while (*s++)
length++;
for (i = length - 1; i >= 0; i--)
{
_putchar(*(t + i));
}
_putchar('\n');
}
