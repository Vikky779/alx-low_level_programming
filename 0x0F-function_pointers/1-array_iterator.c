#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @size: size of array
 * @action: pointer to a function
 * @array: array of parameters to execute
 * Return: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
