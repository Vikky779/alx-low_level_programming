#include "main.h"
/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *  @n: number
 *  @a: sqrt of n
 *  Return: natural sqrt
 */
int help(int n, int j)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (help(n, ++x));
	return (-1);
}
/**
 * _sqrt_recursion - gets the natural square root of n
 * @n: integer
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (help(n, 0));
}
