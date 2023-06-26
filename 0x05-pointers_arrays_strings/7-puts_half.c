#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: string type
 * Description: if odd number, print(length - 1)/2
 */
void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	x++;
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
