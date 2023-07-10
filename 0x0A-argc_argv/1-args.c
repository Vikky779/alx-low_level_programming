#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: array containing program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
