#include "main.h"

/**
 * print_two_digits - print any number that is no more than
 * two digits in 00 format
 * @n: the number to print it's digits
 */


void print_two_digits(int n)
{
	if (n < 10)
	{
		_putchar('0');
		_putchar(n + '0');
	}
	else
	{
		int last_digit = n % 10;
		int first_digit = (n - last_digit) / 10;

		_putchar(first_digit + '0');
		_putchar(last_digit + '0');
	}
}

/**
 * jack_bauer - prints all hours and minutes in a day
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			print_two_digits(i);
			_putchar(':');
			print_two_digits(j);
			_putchar('\n');
		}
	}

}
