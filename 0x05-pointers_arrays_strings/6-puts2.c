#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int x;

	x = 1;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
