#include <unistd.h>
#include "holberton.h"

/**
 * jack_bauer - print every minutes of the day of Jack Bauer
 *
 *
 * Return: 1 return last digit value of n,
 */
void jack_bauer(void)
{
int h;
int m;
for (h = 0; h <= 23; ++h)
{
for (m = 0; m <= 60; ++m)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar('\n');
}
}

}
