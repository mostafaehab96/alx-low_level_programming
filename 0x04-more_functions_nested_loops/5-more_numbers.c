#include "main.h"

/**
 * print_digits - prints any number less than 10 digits with _putchar function
 * @n: the number to print
 */

void print_digits(int n)
{
	int tmp = n;
	int i = 0;
	int j;
	int numbers[10];

	do {
		numbers[i] = (tmp % 10);
		tmp /= 10;
		i++;
	} while (tmp > 0);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(numbers[j] + '0');
	}
}

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			print_digits(j);
		}
		_putchar('\n');
	}

}
