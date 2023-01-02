#include "main.h"

/**
 * _memcpy - copies n bytes form a memory location to another
 * @dest: the location to copy to
 * @src: the location to copy from
 * @n: the number of bytes to be copied
 * Return: a pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
