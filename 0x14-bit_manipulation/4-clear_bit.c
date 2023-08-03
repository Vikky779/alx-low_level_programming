#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: decimal number passed by pointer
 * @index: index starting from 0 to be set
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int d;

	if (index > 64)
		return (-1);
	d = index;
	for (i = 1; d > 0; i *= 2, d--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
