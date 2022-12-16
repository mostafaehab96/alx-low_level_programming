#include "main.h"

/**
 * pow_int - takes two integers and return power of first raised to second
 * @x: first number (base)
 * @y: second number (power)
 *
 * Return: the calculated power
 */

int pow_int(int x, int y)
{
	int i;
	int result = 1;

	for (i = 0; i < y; i++)
	{
		result *= x;
	}

	return (result);
}


/**
 * count_digits - count number of digits in integer
 * @n: number to be counted
 *
 * Return: the count of digits
 */

int count_digits(int n)
{
	int count = 0;
	unsigned int tmp;

	if (n < 0)
	{
		tmp = -n;
	}
	else
	{
		tmp = n;
	}
	do {
		count++;
		tmp /= 10;
	} while (tmp > 0);

	return (count);
}

/**
 * print_number - prints any integer using _putchar only
 * @n: integer to be printed
 */

void print_number(int n)
{
	int count = count_digits(n);
	int i;
	int d;
	unsigned int tmp;

	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
	}
	else
	{
		tmp = n;
	}

	for (i = count - 1; i >= 0; i--)
	{
		d = (tmp / (int) pow_int(10, i)) % 10;
		_putchar(d + '0');
	}
}
