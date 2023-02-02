#include "main.h"

/**
 * print_binary - prints the binary representaion of a decimal number
 * @n: the decimal number
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int tmp = n;
	int i;
	int set;

	do {
		tmp >>= 1;
		count++;
	} while (tmp > 0);

	for (i = count - 1; i >= 0; i--)
	{
		set = n & (1 << i);
		if (set)
			_putchar('1');
		else
			_putchar('0');
	}
}


