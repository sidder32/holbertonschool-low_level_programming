#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a :
 * @b :
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
