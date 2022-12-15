#include "main.h"

/**
 * print_triangle - prints triangle using #
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i;
	int s;
	int h;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		/* printing spaces */
		for (s = 0; s < size - i - 1; s++)
		{
			_putchar(' ');
		}

		/* printing hashes */
		for (h = 0; h < i + 1; h++)
		{
			_putchar('#');
		}

		_putchar('\n');

	}

}
