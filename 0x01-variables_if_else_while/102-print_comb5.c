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
int k;

for (i = '0' ; i <= '9' ; ++i)
{
for (j = '0' ; j <= '9' ; ++j)
{
for (c = '0' ; c <= '9' ; ++c)
{
for (k = '0' ; k <= '9' ; ++k)
{
if (i < c || (i == c && j < k))
{
putchar(i);
putchar(j);
putchar(' ');
putchar(c);
putchar(k);
if (i == '9' && j == '8' && c == '9' && k == '9')
putchar('\n');
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
return (0);
}
