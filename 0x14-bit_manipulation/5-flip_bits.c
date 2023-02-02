#include "main.h"

/**
 * flip_bits - counts the number of flibs needed to convert n to m
 * @n: first number n
 * @m: second number m
 * Return: the flibs count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flibs = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			flibs++;

		n >>= 1;
		m >>= 1;
	}

	return (flibs);
}
