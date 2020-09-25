#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int divt;
int divc;
for (i = 1; i <= 100; i++)
{
divt = i % 3;
divc = i % 5;
if (divt == 0 && divc == 0)
printf("FizzBuzz ");
else if (divt == 0)
printf("Fizz ");
else if (divc == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("\n");
return (0);
}
