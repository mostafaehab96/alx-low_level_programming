#include "main.h"

/**
 * get_endianness - checks if the machine is little of big indian
 * Return: 0 for big indian, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (c[0] == '0')
		return (0);
	return (1);
}

