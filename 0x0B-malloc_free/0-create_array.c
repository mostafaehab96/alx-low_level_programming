#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocates an array in heap and return a pointer to it
 * @size: the size of the array
 * @c: fills the array with this character
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (a != NULL)
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}

		return (a);
	}

	return (NULL);
}
