#include "3-calc.h"
/**
 * get_op_func - selects correct function
 * @s: operator passed as argument
 * Return: Pointer to function corresponding to operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 10)
	{
		if (s[0] == op_s->op[i])
			break;
		i++;
	}
	return (op_s[i / 2].f);
}
