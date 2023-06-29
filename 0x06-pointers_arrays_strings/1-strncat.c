#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: Number of bytes
 * Return: value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
