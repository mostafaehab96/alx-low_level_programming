#include "search_algos.h"

/**
 * interpolation_search - searchs for an element in an array using
 * interpolation search algorithm
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the first index of the value if was found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{

	size_t l = 0, h = size - 1, m;

	if (!array)
		return (-1);

	while (l <= h)
	{
		m = l + (((value - array[l]) * (h - l)) / (array[h] - array[l]));

		if (m >= size)
		{
			printf("Value checked array[%li] is out of range\n", m);
			return (-1);
		}
		printf("Value checked array[%li] = [%i]\n", m, array[m]);
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			h = m - 1;
		else
			l = m + 1;
	}

	return (-1);


}
