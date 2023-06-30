#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: An array of integers
 * @n: number of elements of the array
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int i, ptr;

	for (i = 0; i < n; i++)
	{
		n--;
		ptr = a[i];
		a[i] = a[n];
		a[n] = ptr;
	}
}		
