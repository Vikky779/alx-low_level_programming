#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @x: An integer input
 * Description: returns absolute value of a number
 * Return: Always 0 (Success)
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
