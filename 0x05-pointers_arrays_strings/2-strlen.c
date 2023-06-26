#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: string
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
