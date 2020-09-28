#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s : length of string
 * Return: length of s
 */
int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
