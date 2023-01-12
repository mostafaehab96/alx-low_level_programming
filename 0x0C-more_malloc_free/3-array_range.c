#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers from min to max
 * @min: the minimun value in array
 * @max: the maximum value in array
 * Return: array of integers or NULL if failed
 */

int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *arr = malloc(sizeof(int) * size);

	if (min > max || arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}

	return (arr);
}
