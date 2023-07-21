#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: number of elements in array
 * @cmp: pointer to a function
 * @array: array of elements
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
