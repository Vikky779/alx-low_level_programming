#include "main.h"
/**
 * _strlen - Returns length of string
 * @s: string
 * Return: Length
 */
int _strlen(char *s)
{
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
