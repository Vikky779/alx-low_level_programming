#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string.
 * @s: Input string
 * @c: input string
 * Return: First occurrence of character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
