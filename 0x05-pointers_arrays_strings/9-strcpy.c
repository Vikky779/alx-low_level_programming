#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src to dest
 * @dest: char pointer 1
 * @src: char pointer 2
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, count;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (count = 0; count <= len; count++)
		dest[count] = src[count];
	return (dest);
}
