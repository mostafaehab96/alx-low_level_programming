#include "main.h"

/**
 * reverse_array - reverse an array of integer of size n
 * @a: the array to reverse
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int tmp;

	for (i = 0; i < n; i++)
	{
		if (i >= j)
			break;

		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
