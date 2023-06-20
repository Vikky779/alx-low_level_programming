#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: Always 1 if it is lowercase and 0 if is uppercase
 */
int _islower(int c)
{
	char x;
	int i = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
			_putchar("x");
		return (1);
		else if ( x == 0)
		{
			_putchar('x');
			return (0);
		}
	}
}
