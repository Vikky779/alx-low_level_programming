#include "main.h"
/**
 * *_strstr - locates a substring
 * @needle: substring
 * @haystack :input string
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *h = '\0'; h++)
	{
		char *h = haystack;
		char *n = needle;
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
