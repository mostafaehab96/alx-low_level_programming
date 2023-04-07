#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key
 * Return: 0 if success 1 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;
	hash_node_t **arr;

	if (!ht || !value)
		return (1);

	if (strlen(value) == 0)
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
