#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: numbero of command line arguments
 * @argv: array containing program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
