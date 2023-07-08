#include "main.h"
/**
 * *rot13 - encodes a string using rot13.
 * @s: Input string
 * Return: the pointer to dest
 */
char *rot13(char *s)
{
	int count = 0, a;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) == rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
