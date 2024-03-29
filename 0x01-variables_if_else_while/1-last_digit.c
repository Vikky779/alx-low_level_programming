#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints  based on the last digit of the number in the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;

	if (o > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, o);
	else if (o == 0)
		printf("Last digit of %i is %i and is 0\n", n, o);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, o);
	return (0);
}
