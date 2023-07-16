#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (x = 0; (min + x) <= max; x++)
		p[x] = (min + x);

	return (p);
}
