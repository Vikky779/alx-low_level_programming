#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: Always 1 if it is lowercase and 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	
	return (lower);
}
