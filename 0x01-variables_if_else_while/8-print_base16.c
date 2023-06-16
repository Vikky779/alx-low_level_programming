#include <stdio.h>
/**
 * main- prints all the numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
