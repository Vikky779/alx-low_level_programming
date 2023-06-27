#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: Integer in a string
 */
int _atoi(char *s)
{
	int numb, len, numbcount, mul, a, neg;

	len = 0;
	a = 0;
	numbcount = 0;
	mul = 1;
	neg = 1;
	numb = 0;

	while (s[len] != '0' && s[len] <= '9')
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			numbcount++;
			if (!(s[len + 1] >= '0' && s[len] <= '9')
					break;
					}
					len++;
					}
					for (; numbcount > 1; numbcount--)
					mul *= 10;
					for (; a <= len; a++)
					{
					if (s[a] == '-')
					neg *= -1;
					else if (s[a] <= '9' && s[a] >= '0')
					{
						numb += (s[a] - '0') * mul * neg;
						mul /= 10;
					}
					}
			return (numb);
}


