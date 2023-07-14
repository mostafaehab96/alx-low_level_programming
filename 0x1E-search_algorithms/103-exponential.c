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
 * exponential_search - searchs for an element in an array
 * using exponential search algorithm
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the fist index of the value if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t l, h, m, i = 1;

	if (!array)
		return (-1);

	do {
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i *= 2;
	} while (i < size && array[i] < value);

	l = i / 2;
	h = i >= size ? size - 1 : i;
	printf("Value found between indexes [%li] and [%li]\n", l, h);

	while (l <= h)
	{
		print_array(array, l, h);
		m = (l + h) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			h = m - 1;
	}

	return (-1);
}

