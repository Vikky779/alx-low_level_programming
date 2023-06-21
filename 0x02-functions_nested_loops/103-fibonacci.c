#include <stdio.h>
/**
 * main - prints sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, a = 1, b = 2, sum = 0, tsum = 0;

		for (i = 0; i < 49; i++)
		{
			if ((a % 2 == 0) && (b < 4000000))
			{
				tsum = tsum + b;
			}
			sum = a + b;
			a = b;
			b = sum;

		}
		printf("%ld\n", tsum);
		return (0);
}
