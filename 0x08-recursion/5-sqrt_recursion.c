#include "main.h"
/**
 * help - helps function find sqrt
 *  @n: number
 *  @a: sqrt of n
 *  Return: natural sqrt
 */
int help(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a * a < n)
		return (help(n, ++a));
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
