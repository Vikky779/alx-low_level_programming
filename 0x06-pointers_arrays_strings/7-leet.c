#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @n: An input string
 * Return: Capitalized words
 */
char *leet(char *n)
{
	int i, b;

	int x[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int y[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (x[i] != '\0')
		{
			x[i] = y[i];
			y[i] = n[i];
		}
	}
	return (n);
}
