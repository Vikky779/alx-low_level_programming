#include <stdio.h>
/**
 * main - prints from 1 to 100 followed  by a new line
 * Return: Always 0
 */
int main(void)
{
	int a;

	a = 1;
	printf("%d", a);
	for (a = 2; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf(" Fizzbuzz");
		}
		else if (a % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}


