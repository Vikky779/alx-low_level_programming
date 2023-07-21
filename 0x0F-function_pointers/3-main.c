#include "3-calc.h"
#include <stdio.h>
/**
 * main - contains main function only
 * @argc: size of argv
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", p(a, b));
	return (0);
}
