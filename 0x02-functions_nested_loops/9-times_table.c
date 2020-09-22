#include <unistd.h>
#include "holberton.h"

/**
 * times_table - prints 9 times table,
 *
 *
 * Return: 1 return last digit value of n,
 */
void times_table(void)
{
int i;
int j;
int r;
for (i = 0; i <= 9; ++i)
{
for (j = 0; j <= 9; ++j)
{
r = i * j;
if (r > 9)
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
else
{
if (j > 0)
_putchar(' ');
_putchar(r + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

}

