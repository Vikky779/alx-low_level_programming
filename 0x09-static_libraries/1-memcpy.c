#include "main.h"
/**
 * _memcpy - Copies memory
 * @dest: Storapde memory
 * @src: Copied memory
 * @n: Number of bytes
 * Return: Copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
