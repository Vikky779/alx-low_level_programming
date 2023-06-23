#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers from 1 to 100 followed  by a new line
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 and 5 multiples print Fizzbuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
printf("Fizzbuzz");
else if (x % 3 == 0)
printf("Fizz");
else if (x % 5 == 0)
printf("Buzz");
else
prntf("%d", x);
if (x < 100)
printf(" ");
}
putchar('\n');
return (0);
}
