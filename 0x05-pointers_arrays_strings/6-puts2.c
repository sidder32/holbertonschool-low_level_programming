#include <stdio.h>
#include "holberton.h"
/**
 * puts2 - prints every other character of string
 * @str:
 *
 */
void puts2(char *str)
{
int i;
i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}

