#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of person
 * @f: function pointer
 * Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
