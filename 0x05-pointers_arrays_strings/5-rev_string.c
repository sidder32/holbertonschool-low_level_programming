#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - reverse string
 * @s : string in reverse
 *
 */
void rev_string(char *s)
{
int length = 0;
int i;
int j;
char *t;
char sav;
t = s;
i = 0;
while (*t++)
length++;
j = length - 1;
while (i < j)
{
sav = s[i];
s[i] = s[j];
s[j] = sav;
i++;
j--;
}
}
