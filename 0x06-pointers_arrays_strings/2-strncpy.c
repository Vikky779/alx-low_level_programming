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
	int j;

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
