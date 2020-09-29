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
if (*(str + i) == 0 || (*(str + i) % 2 == 0))
_putchar(*(str + i));
i = i + 1;
}
_putchar('\n');
}

