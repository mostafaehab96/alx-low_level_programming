#include "main.h"

/**
 * print_sign - print the sign of the number n + or -
 * @n: the number to check it's sign
 *
 * Return: 1 if number is positive, 0 if 0, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
