#include "main.h"

/**
 * print_number - prints any integer using onley _putchar function
 * @n: the integer to be printed
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}

	if (i < 10)
	{
		_putchar(i + '0');
	}
	else
	{
		print_number(i / 10);
		_putchar(i % 10 + '0');
	}
}
