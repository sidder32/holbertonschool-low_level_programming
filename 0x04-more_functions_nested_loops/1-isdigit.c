#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - check for digit
 * @c: param
 *
 * Return: ,
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

