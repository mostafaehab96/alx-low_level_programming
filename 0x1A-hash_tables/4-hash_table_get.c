#include "hash_tables.h"

/**
 * hash_table_get - gets the value of a key in hashtable
 * @ht: the hashtable to search into
 * @key: the key to search for
 * Return: the value associated with the element
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];
	while (tmp && strcmp(key, tmp->key))
		tmp = tmp->next;

	if (tmp)
		return (tmp->value);
	return (NULL);
}


