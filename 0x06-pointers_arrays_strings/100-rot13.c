#include "main.h"
/**
 * *rot13 - encodes a string using rot13.
 * @s: string
 * Return: String
 */
char *rot13(char *s)
{
	int a = 0, b = 0;

	char alpha1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != 0)
	{
		for (b = 0; b <= 52; b++)
		{
			if (*(s + a) == alpha1[b])
			{
				*(s + a) == alpha2[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
