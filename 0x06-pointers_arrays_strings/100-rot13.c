#include "main.h"
/**
 * *rot13 - encodes a string using rot13.
 * @s: Input string
 * Return: return string
 */
char *rot13(char *s)
{
	int a = 0, a2;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (a2 = 0; a2 < 52; a2++)
		{
			if (*(s + a) == alpha[a2])
			{
				*(s + a) == alpha2[a2];
				break;
			}
		}
		a++;
	}
	return (s);
}
