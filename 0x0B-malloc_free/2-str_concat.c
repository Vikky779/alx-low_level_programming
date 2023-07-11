#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int x, y = 0, z = 0;

	if (!s1)
		s1 = "";
	else
		for (; s1[y]; y++)
			;
	if (!s2)
		s2 = "";
	else
		for (; s2[z]; z++)
			;
	z++;
	ptr = malloc((y + z) * sizeof(char));

	if (!ptr)
		return (NULL);

	for (x = 0; x <= (y + z); x++)
	{
		if (x < y)
			ptr[x] = s1[x];
		else
			ptr[x] = s2[x - y];
	}
	return (ptr);
}
