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

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j <= n; j++)
		dest[j] = src[j];
	return (dest);
}
