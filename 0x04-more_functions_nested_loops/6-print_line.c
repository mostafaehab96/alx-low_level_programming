#include "main.h"

/**
 * print_line - prints _ n times
 * @n: times to print _
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
