#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;
	hash_node_t **arr;

	if (!ht || !value)
		return (1);

	new = malloc(sizeof(hash_node_t));
	new->key = (char *)key;
	new->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	arr = ht->array;

	if (arr[index] == NULL)
	{
		new->next = NULL;
		arr[index] = new;
	}
	else
	{
		new->next = arr[index];
		arr[index] = new;
	}

	return (0);
}
