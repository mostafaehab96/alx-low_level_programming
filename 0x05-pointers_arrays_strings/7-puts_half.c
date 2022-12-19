#include <string.h>
#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int half;
	int i;

	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2 + 1;
	}

	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
