#include "main.h"

/**
 * print_rev - prints a string in a reverse order
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	if (s[0] == '\0')
		return;

	print_rev(++s);
	_putchar(s[0]);
}

