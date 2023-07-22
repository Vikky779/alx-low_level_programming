#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: strings to be printed
 * @n: number of strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list spr;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(spr, n);

	if (n > 0)
		printf("%s", va_arg(spr, char *));

	for (i = 1; i < n; i++)
	{
		ptr = va_arg(spr, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(spr);
}
