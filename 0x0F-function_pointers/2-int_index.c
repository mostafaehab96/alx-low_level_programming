#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer in array using some function
 * @array: the array to search in it
 * @size: the size of the array
 * @cmp: the function to be used to compare values
 * Return: the index of the integer if found, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
