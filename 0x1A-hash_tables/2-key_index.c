#include "hash_tables.h"

/**
 * key_index - calculates the index of the key using djb2 hash function
 * @key: the key of the hash node
 * @size: the size of the table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
