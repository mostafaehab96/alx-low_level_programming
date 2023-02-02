#include "main.h"

/**
 * get_bit - checks if the bit at a given index is set
 * @n: the decimal number to be checked
 * @index: the position of the bit to be checked
 * Return: 1 if the bit is set, 0 if not, -1 if index is bigger than normal
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit	= n & (1 << index);

	return (bit ? 1 : 0);
}
