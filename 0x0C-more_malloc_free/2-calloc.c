#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates a memory in the heap and intialize it to 0
 * @nmemb: the number of elements to be allocated
 * @size: the size of each element
 * Return: an array of memory allocated and set to 0, or NULL if failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;

	if (size == 0 || nmemb == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	memory = memset(memory, 0, nmemb * size);
	return (memory);
}
