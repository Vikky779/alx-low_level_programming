#include "main.h"
/**
 * *cap_string - capitalizes all words of a string.
 * @c: An input string
 * Return: Capitalized string
 */
char *cap_string(char *c)
{
	int i, a;
	int cap = 32;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - cap;
		}

		cap = 0;

		for (a = 0; a <= 12; a++)
		{
			if (c[i] == separators[a])
			{
				a = 12;
				cap = 32;
			}
		}
	}
	return (c);
}
