#include "main.h"
/**
 * _memset - Block memory to be filled
 * @s: Memory address to be filled
 * @b: Desired value
 * @n: Number of bytes
 * Return: n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
