#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * @len: length of string
 */
void puts2(char *str)
{
	int x;
	int len = 0;

	for (x = 1; x <= len; x++)
	{
		_putchar(str[x + 1]);

		x = 0;
		while (str[x] != '\0')
		{
			_putchar(str[x]);
			x++;
		}
		_putchar('\n');
	}
}
