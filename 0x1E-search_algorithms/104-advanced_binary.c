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
 * binary_recursion - searches for an element in a sorted array
 * @array: the array to search at
 * @l: the left handside of the array
 * @r: the right handside of the array
 * @value: the value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int binary_recursion(int *array, size_t l, size_t r, int value)
{
	int m = (l + r) / 2;

	if (l > r)
		return (-1);

	print_array(array, l, r);
	if (array[m] == value && array[m - 1] == value)
		return (binary_recursion(array, l, m, value));
	else if (array[m] < value)
		return (binary_recursion(array, m + 1, r, value));
	else if (array[m] > value)
		return (binary_recursion(array, l, m, value));
	else
		return (m);
}

/**
 * advanced_binary - searches for an element in a sorted array
 * @array: the array to search at
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1;

	if (!array)
		return (-1);

	return (binary_recursion(array, l, r, value));
}
