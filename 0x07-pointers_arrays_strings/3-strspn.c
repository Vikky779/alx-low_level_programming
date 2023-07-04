#include "main.h"
#include <stdio.h>
/**
 * int _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c;

	for (b = 0; s[b] != '\0' && b == a; a++)
		for (c = 0; accept[a] != '\0'; c++)
			a++;
	return (a);
}
