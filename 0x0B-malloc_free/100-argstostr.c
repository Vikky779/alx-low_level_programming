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
	char *str;
	int h, i, j, k;

	if (ac == 0)
		return (NULL);

	for (h = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			h++;
		h++;
	}

	str = malloc((h + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = j = k = 0; k < h; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			str[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < h - 1)
			str[k] = av[i][j];
	}
	str[k] = '\0';

	return (str);
}
