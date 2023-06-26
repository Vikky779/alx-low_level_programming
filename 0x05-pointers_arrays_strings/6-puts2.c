#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int x;

	for (x = 1; x <= str, x++)
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
