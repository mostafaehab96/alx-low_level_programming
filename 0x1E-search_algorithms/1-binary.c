#include "search_algos.h"

/**
 * print_array - prints the array we search at
 * @array: the array to be printed
 * @s: the start of the array
 * @e: the end of the array
 */
void print_array(int *array, size_t s, size_t e)
{
	size_t i;

	printf("Searching in array: ");
	for (i = s; i <= e; i++)
	{
		printf("%i", array[i]);
		if (i < e)
			printf(", ");
	}

	printf("\n");
}

/**
 * binary_search - searches for an element in a sorted array
 * @array: the array to search at
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (!array)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;
		print_array(array, l, r);
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;
	}

	return (-1);
}
