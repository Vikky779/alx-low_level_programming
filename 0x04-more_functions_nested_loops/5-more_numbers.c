#include "main.h"
/**
 * more_numbers - prints 10times numbersfrom 0 to 14
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
			_putchar(i * 10);
		}
		_putchar('\n');
	}
}
