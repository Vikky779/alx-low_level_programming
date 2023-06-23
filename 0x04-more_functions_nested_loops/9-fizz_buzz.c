#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers from 1 to 100 followed  by a new line
 * 3 multiples print Fizz
 * 5 multiples print Buzz
 * 3 and 5 multiples print Fizzbuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "Fizzbuzz";

	for (a = 1; a <= 100; a++)
	{
		if (a == 100)
			printf("%s", b);
		else if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s ", fb);
		else if (a % 3 == 0)
			printf("%s ", f);
		else if (a % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}


