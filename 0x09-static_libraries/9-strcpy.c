#include "main.h"
/**
 * *_strcpy - Copies a string
 * @dest: Destination string
 * @src: source string
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
