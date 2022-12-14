#include "main.h"

/**
 * count_zeros - count trailing zeros in integer n
 * @n: the number to count it's trailing zeros
 *
 * Return: the count of zeros
 */

int count_zeros(int n)
{
	int tmp = n;
	int count = 0;

	while (tmp % 10 == 0)
	{
		if (tmp == 0)
			break;
		count++;
		tmp /= 10;
	}

	return (count);
}

/**
 * print_digits - prints all digits of number n
 * @n: the number that will be printed
 */

void print_digits(int n)
{
	int tmp = n;
	int digits = 0;
	int zero_count = count_zeros(n);
	int i;

	while (tmp > 0)
	{
		digits = digits * 10 + (tmp % 10);
		tmp /= 10;
	}
	do {
		_putchar(digits % 10 + '0');
		digits /= 10;
	} while (digits > 0);

	for (i = 0; i < zero_count; i++)
	{
		_putchar('0');
	}


}

/**
 * print_times_table - prints times table from 0 to n
 * @n: the number to print times table to
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			print_digits(i * j);
			if (j == n)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			if ((i * (j + 1)) < 10)
				_putchar(' ');
			if ((i * (j + 1)) < 100)
				_putchar(' ');

		}
		_putchar('\n');
	}

}
