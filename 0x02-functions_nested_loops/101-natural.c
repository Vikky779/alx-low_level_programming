#include <stdio.h>
/**
 * main - Entry point
 * Desciption: function prints the sum of all multiples of 3 0r 5
 * Return: Sum of multiples
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

