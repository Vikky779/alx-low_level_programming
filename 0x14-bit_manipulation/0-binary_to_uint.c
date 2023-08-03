#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 characters
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted, binary;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (binary = 1, converted = 0, l--; l >= 0; l--, binary *= 2)
	{
		if (b[l] == '1')
			converted += binary;
	}

	return (converted);
}
