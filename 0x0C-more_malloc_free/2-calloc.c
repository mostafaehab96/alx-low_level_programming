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
	void *memory = malloc(size * nmemb);

	if (size == 0 || nmemb == 0 || memory == NULL)
		return (NULL);

	memory = memset(memory, 0, nmemb * size);

	return (memory);
}
