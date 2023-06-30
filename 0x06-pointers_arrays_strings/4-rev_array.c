#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: An array of integers
 * @n: number of elements of the array
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
	{
		i--;
	}
	if (a[i] != '\0')
	{
		i++;
	}
}
