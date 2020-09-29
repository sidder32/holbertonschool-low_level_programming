#include <stdio.h>
#include "holberton.h"
/**
 * *_strcpy - copy string pointed by src to buffer pointed by dest
 * @src: source to copy
 * @dest: destination
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (*(src + i))
{
*(dest + i) = *(src + i);
i = i + 1;
}
*(dest + i) = '\0';
return (dest);
}


