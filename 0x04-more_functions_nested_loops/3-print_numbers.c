#include "main.h"
/**
 * print_numbers - prints the numbers from 0 through 9
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
