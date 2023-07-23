#include "main.h"
#include <stdio.h>
/**
 * *infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use
 * @size_r: buffer size
 * Return: pointer to dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, p, g, dr1, dr2, sum = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		g = c1;
	else
		g = c2;
	if (size_r <= g + 1)
		return (0);
	r[g + 1] = '\0';
	c1--, c2--, size_r--;
	dr1 = *(n1 + c1) - 48, dr2 = *(n2 + c2) - 48;
	while (g >= 0)
	{
		p = dr1 + dr2 + sum;

		if (p >= 10)
			sum = p / 10;
		else
			sum = 0;
		if (p > 0)
		*(r + g) = (p % 10) + 48;
		else
			*(r + g) = '0';
		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = *(n2 + c2) - 48;
		else
			dr2 = 0;
		g--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
