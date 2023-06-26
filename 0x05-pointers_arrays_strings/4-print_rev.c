#include "main.h"
/**
 * print_rev - prints a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != 0)
		x++;
	x--;
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
