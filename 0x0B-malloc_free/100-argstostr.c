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
	int x, b, y = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (b = 0; av[x][b]; b++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (b = 0; av[x][b]; b++)
		{
			str[y] == av[x][b];
			y++;
		}
		if (str[y] == '\0')
		{
			str[y++] == '\n';
		}
	}
	return (str);
}
