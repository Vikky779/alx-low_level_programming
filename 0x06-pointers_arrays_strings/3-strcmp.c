#include "main.h"
/**
 * _strcmp -  compares two strings.
 * @s1: First input string
 * @s2: Second input string
 * Return: return 0 if s1 and s2 are the same and another number if not
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
