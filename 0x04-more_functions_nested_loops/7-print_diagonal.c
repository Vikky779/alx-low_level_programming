#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: A diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (j = 0; j < n; j++)
	{
		for (i = j; i > 0; i--)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
	}
}
