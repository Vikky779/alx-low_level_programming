#include "main.h"
/**
 * help - helps prime function
 * @n: number
 * @x: checks if n is divisible by x
 * Return: 0 if not prime and 1 if prime
 */
int help(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (help(n, ++x));
	return (0);
}
