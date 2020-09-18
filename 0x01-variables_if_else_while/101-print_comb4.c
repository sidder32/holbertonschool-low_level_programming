#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;
int c;

for (i = '0' ; i <= '7' ; ++i)
{
for (j = i + 1 ; j <= '8' ; ++j)
{
for (c = i + 2 ; c <= '9' ; ++c)
{
if (i != j && j != c)
{
putchar(i);
putchar(j);
putchar(c);

if (i == '7' && j == '8' && c == '9')
putchar('');
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
