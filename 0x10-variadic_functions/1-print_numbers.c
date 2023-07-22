#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: numbers
 * @separator: string to be printed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *spr;
	unsigned int i;
	va_list ptr;

	if (separator == NULL || *separator == 0)
		spr = "";
	else
		spr = (char *) separator;

	va_start(ptr, n);

	if (n > 0)
		printf("%d", va_arg(ptr, int));

	for (i = 1; i < n; i++)
		printf("%s%d", spr, va_arg(ptr, int));
	printf("\n");
	va_end(ptr);
}
