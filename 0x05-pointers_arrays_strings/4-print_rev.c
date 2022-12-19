#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in a reverse order
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

