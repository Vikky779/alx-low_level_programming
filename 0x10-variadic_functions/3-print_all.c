#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int n = 0, i = 0;
	char *sep = "";
	char *spr;

	va_start(ptr, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(ptr, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(ptr, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(ptr, double), sep);
			break;
		case 's':
			spr = va_arg(ptr, char *);
			if (spr == NULL)
				spr = "(nil)";
			printf("%s%s", spr, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(ptr);
}
