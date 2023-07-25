#include "main.h"
#include <stdio.h>
/**
 * _putchar - Entry point
 * @c: character
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
