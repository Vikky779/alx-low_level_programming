#include "main.h"
/**
 * rev_string -  reverses a string.
 * @s:string to be reversed
 */
void rev_string(char *s)
{
	int lenth x;
	char *begin, *end, temp;

	length = string_length(s);
	begin = s;
	end = s;

	for (x = 0; x < length - 1; x++)
		end++;

	for (x = 0; x < length / 2; x++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
