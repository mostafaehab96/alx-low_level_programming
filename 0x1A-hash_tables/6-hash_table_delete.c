#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *f = NULL, **arr = NULL;
	unsigned long int i;

	if (!ht)
		return;

	arr = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		tmp = arr[i];
		while (tmp)
		{
			f = tmp;
			tmp = tmp->next;
			free(f->key);
			free(f->value);
			free(f);
		}
	}

	free(arr);
	free(ht);
}

