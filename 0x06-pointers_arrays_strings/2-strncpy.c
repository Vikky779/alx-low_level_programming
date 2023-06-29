#include "main.h"
/**
 * *_strncpy -  copies a string.
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: number of bytes
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
