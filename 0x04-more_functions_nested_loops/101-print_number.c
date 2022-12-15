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
 * print_number - prints all digits of number n
 * @n: the number that will be printed
 */

void print_number(int n)
{
	int tmp = n;
	int digits = 0;
	int zero_count = count_zeros(n);
	int i;
	
	if (tmp < 0)
	{
		tmp = -tmp;
		_putchar('-');
	}

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
