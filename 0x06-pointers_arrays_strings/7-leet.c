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
		for (b = 0; b <= 9; b++)
		{
			if (n[i] == x[b])
			{
				n[i] = y[b / 2];
				b = 9;
			}
		}
	}
	return (n);
}
