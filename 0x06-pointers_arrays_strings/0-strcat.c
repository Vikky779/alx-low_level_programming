#include "main.h"
/**
 * *_strcat -  a function that concatenates two strings.
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	j = strlen(dest);

	if (!src[i])
	{
		src[i] = '\0';
	}
	else
	{
	|	dest[i + j] = src[i];
		i++;
		strcat(dest, src);
	}
	return (dest);
}
