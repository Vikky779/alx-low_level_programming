#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h / 10);
			-putchar(h % 10);
			_putchar(':');
			_putchar(m / 10);
			_putchar(m % 10);
			_putchar('\n');
		}
	}
}
