#include "main.h"
/**
 * _puts - Prints a string
 * @s: string
 * Return: Nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
