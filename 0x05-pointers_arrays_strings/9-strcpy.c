#include "main.h"
/**
 *char *_strcpy - copies the string pointed to by src to dest
 *@dest: destination string
 *@src: source string
 */
char *_strcpy(char *dest, char *src)
{
	int len, count;

	len = 0;
	whie (src[len] != '\0')
		len++;
	for (count = 0; count <= len; count++)
		dest[count] = src[count];
	return (dest);
}
