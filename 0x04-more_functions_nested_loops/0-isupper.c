#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: An input character
 * Description: _putchar prints alphabet in uppercase
 * Return: Always 1 if it is uppercase and 0 if otherwise
 */
int _isupper(int c);
{
	char i;
	int upper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			upper = 1;
	}
	return (upper);
}
