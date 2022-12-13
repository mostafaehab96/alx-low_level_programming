#include "main.h"

/**
 * print_digits - prints all digits of number n
 * @n: the number that will be printed
 */

void print_digits(int n)
{
	int tmp = n;
	int digits = 0;
	int zero_count = 0;
	int i;

	while (tmp > 0)
	{
		digits = digits * 10 + (tmp % 10);
		if (tmp % 10 == 0)
			zero_count++;
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
 * times_table - prints times table from 0 to 9
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			print_digits(i * j);
			if (j == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			if ((i * (j + 1)) < 10)
				_putchar(' ');

		}
		_putchar('\n');
	}

}
