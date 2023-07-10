#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: array containing program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 1; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
