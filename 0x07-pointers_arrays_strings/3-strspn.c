#include "main.h"
/**
 * int _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c;

	for (b = 0; s[b] != '\0' && b == a; b++)
		for (c = 0; accept[c] != '\0'; c++)
			if (s[b] == accept[c])
			a++;
	return (a);
}
