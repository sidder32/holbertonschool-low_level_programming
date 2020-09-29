#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of an array of integer
 * @n: number of elements
 * @a: array
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i = i + 1;
}
printf("\n");
}

