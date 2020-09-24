#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - check for uppercase character
 * @c: param
 *
 * Return: ,
 */
int _isupper(int c)
{
if (c < 97)
return (1);
else
return (0);
}
