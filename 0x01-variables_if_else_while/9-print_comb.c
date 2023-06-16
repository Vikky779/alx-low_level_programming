#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	}
		putchar('\n');
		return (0);
}
