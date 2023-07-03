#include "main.h"
/**
 * *_strchr - locates a character in a string.
 * @s: Input string
 * @c: input string
 * Return: First occurrence of character
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
