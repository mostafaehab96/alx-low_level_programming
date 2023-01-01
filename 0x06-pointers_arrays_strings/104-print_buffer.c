#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a char buffer in some format
 * @b: the buffer
 * @size: size of the buffer
 */

void print_buffer(char *b, int size)
{
	int i = 0;
	int j;

	if (size == 0)
	{
		printf("\n");
		return;
	}

	while (i < size)
	{
		/* printing position of first byte */
		printf("%08x: ", i);

		/* printing hexadecimal content of the buffer 2 bytes at a time */
		for (j = i; j < i + 10; j += 2)
		{
			if (j + 1 == size)
				printf("%02x   ", b[j]);
			else if (j >= size)
				printf("     ");
			else
				printf("%02x%02x ", b[j], b[j + 1]);

		}

		for (j = i; j < i + 10 && j < size; j++)
		{
			if (isprint(b[j]))
				putchar(b[j]);
			else
				putchar('.');
		}
		i += 10;
		putchar('\n');

	}
}
