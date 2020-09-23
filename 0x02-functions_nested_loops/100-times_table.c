#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints time table
 * @n: param n
 *
 * Return: ,
 */
void print_times_table(int n)
{
int i;
int j;
int r;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; ++i)
{
for (j = 0; j <= n; ++j)
{
r = i * j;
if (j == 0)
{
printf("%d", r);
}
else
{
if (r >= 100)
printf("%d", r);
else if (r >= 10)
printf(" %d", r);
else
printf("  %d", r);
}
if (j < n)
{
printf(", ");
}
}
printf("\n");
}
}

}
