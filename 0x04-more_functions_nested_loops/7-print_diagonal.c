#include "main.h"

/**
 * print_diagonal - prints diagonal of length n
 * @n: length of the diagonal
 */

void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
