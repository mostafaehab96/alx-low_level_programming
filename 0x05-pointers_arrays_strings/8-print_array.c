#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements in the array
 * @a: a pointer to the array
 * @n: number of items to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i == n - 1)
			break;

		printf(", ");
	}

	printf("\n");
}
