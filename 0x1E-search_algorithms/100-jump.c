#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searchs for an element in an array using
 * search jump algorithm
 * @array: the array to search at
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i = 0, j = 0, s = 0;

	if (!array || size < 1)
		return (-1);

	jump = sqrt(size);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i += jump;
	}

	s = i - jump;
	printf("Value found between indexes [%li] and [%li]\n", s, i);

	for (j = s; j <= i && j < size; j++)
	{
		printf("Value checked array[%li] = [%i]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}

	return (-1);
}
