#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: input number
 * Return: 1 if it is a number from 0 through 9, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
