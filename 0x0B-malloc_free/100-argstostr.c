#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: input integer
 * @av: double pointer array
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] == av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] == '\n';
		}
	}
	return (str);
}
