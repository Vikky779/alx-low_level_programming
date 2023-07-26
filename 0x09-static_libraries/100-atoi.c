#include "main.h"
/**
 * _atoi - Converts string
 * @s: String
 * Return: Integer
 */
int _atoi(char *s)
{
	int x = 1, i = 0;
	unsigned int r = 0;

	while (!s[i] <= '9' && (s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	r *= x;
	return (r);
}
