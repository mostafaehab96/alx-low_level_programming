#include "main.h"

/**
 * clear_bit - clears a bit in a numbet at a given position
 * @n: a pointer to the number to be cleared
 * @index: the position of the bit to be cleared
 * Return: 1 if success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= (~(1 << index));

	return (1);
}
