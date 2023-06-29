#include "main.h"
/**
 * *_strcat -  a function that concatenates two strings.
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
		;
	for (; *src != '\0'; src++)
	{
		*temp = *src;
		temp++;
	}
	*temp = *src;
	return (dest);
}
