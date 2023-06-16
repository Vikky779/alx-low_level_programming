#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	x = 0;

	while (x < 100)
	{
		y = x % 10, /* singles digit */
		
		z = x / 10, /* doubles digit */

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');

			if (x < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}

