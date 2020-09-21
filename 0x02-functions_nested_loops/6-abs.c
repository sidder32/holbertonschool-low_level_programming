#include <unistd.h>
#include "holberton.h"

/**
 * _abs - Absolute value
 * @n : sign of number
 *
 * Return: 1 return absolute value of n,
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * (-1));
}
}
