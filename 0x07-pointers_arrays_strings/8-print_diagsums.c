#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the principal and secondary diagonals
 * in a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i; /* the current row in matrix */
	int p_col = 0; /* principal diagonal column */
	int s_col = size - 1; /* secondary diagonal column */
	int p_sum = 0; /* sum of principal diagonal */
	int s_sum = 0; /* sum of secondary diagonal */
	int cell;

	for (i = 0; i < size; i++)
	{
		cell = (i * size + p_col);
		p_sum += a[cell];
		cell = (i * size + s_col);
		s_sum += a[cell];
		p_col++;
		s_col--;
	}

	printf("%i, %i\n", p_sum, s_sum);
}

