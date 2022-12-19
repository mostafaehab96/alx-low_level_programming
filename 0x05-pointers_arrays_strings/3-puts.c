#include "main.h"

/**
 * _puts - takes a string and print it
 * @str: the string to be printed in the output
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
