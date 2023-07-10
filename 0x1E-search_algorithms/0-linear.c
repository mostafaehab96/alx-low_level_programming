#include "search_algos.h"

/**
 * linear_search - search for an element in an array in linear algorithm
 * @array: the array to look at
 * @size: the size of the array
 * @value: the value to look for
 * Return: the index of the value if being found, -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
