#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 *
 * Return: Always 1 if it is uppercase and 0 if otherwise
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
