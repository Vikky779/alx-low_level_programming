#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: An input character
 * Description: returns 1 if character is a letter, lowecase or uppercase
 * Return: Always 1 or 0 in otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c = lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
