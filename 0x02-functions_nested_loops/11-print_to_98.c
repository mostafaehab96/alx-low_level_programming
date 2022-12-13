#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number to start printing from
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}

	for (i = n; i < 98; i++)
	{
		printf("%i, ", i);
	}

	printf("98\n");
}
