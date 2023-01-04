#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{

	_putchar(s[0]);

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(&s[1]);
}
