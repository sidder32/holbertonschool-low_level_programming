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
for (i = '0' ; i <= '8' ; ++i)
{
for (j = i + 1; j <= '9' ; ++j)
{
if (i != j)
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
putchar('\n');
else
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
