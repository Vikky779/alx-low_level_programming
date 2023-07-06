#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: first number
 * @y: second number
 * Return: return value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	int x, y;

	return (pow(x, y));
}
