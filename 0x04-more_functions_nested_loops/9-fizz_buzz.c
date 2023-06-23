#include <stdio.h>
/**
 * main - prints from 1 to 100 followed  by a new line
 * Return: Always 0
 */
int main(void)
{
	int a;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "Fizzbuzz";

	for (a = 1; a <= 100; a++)
	{
		if  (a == 100)
			printf("%s", b);
		else if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s ", fb);
		else if (a % 3 == 0)
			printf("%s ", f);
		else if (a % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}


