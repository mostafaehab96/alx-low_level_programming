#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table in sort of python dict
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp, **arr;
	unsigned long int i, size;
	int put_comma = 0; /* a boolean to check if I should put a comma separator*/
	int first_pair = 1; /* a boolean to check if it's the first pair to print */

	if (!ht)
		return;

	printf("{");
	arr = ht->array;
	size = ht->size;

	for (i = 0; i < size; i++)
	{
		tmp = arr[i];
		if (!first_pair && tmp)
			put_comma = 1;
		else if (tmp)
			first_pair = 0;

		while (tmp)
		{
			if (put_comma)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		put_comma = 0;
	}
	printf("}\n");
}
