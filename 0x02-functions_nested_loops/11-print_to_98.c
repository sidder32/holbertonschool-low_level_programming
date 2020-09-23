#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: param n
 *
 * Return: ,
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i == 98)
printf("\n");
else
printf(", ");

}
}
