#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - gets the function that correspods to the operator
 * @s: the operator to use
 * Return: a pointer to a function if exits, NULL otherwise
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
