#include <stdio.h>
/*
 * main - prints all single digits numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%i", x);
	}
	putchar('\n');
	return (0);
}
