#include "main.h"

/**
 * set_bit - sets a bit in a number at a given position
 * @n: a pointer to the number to be set
 * @index: the position of the bit to be set
 * Return: 1 if succeed, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);

	return (1);
}
