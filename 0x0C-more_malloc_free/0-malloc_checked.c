#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates some bytes in memory heap
 * @b: bytes to be allocated
 * Return: a pointer to the allocated memory, exit if failed
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory != NULL)
		return (memory);
	exit(98);
}
