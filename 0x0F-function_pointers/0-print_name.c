#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name by a function passed to it
 * @name: the name to be printed
 * @f: the function pointer to be passed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
