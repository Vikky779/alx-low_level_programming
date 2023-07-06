#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: input number
 * Return: Factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		if (n < 0)
		return (-1);
			factorial(n * factorial(n - 1));
}
