#include "function_pointers.h"

/**
 * array_iterator - iterates over an array and excuting a function passed to it
 * @array: the array to pass it's elements in function
 * @size: the size of array
 * @action: the function to be called
 */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
