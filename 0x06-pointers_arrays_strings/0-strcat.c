#include "main.h"
/**
 * *_strcat -  a function that concatenates two strings.
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
