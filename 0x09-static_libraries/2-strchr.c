#include "main.h"
/**
 * _strchr - Entry point
 * @s: Input one
 * @c: Input two
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int r = 0;

	for (; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (&s[r]);
	}
	return (0);
}
