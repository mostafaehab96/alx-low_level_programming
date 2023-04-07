#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key
 * Return: 1 if success 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	unsigned long int index;
	hash_node_t **arr;

	if (!ht || !value || !key || strlen(key) == 0)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
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
		tmp = arr[index];
		while (tmp != NULL && strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		if (tmp)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			free(new->value);
			free(new);
		}
		else
		{
			new->next = arr[index];
			arr[index] = new;
		}
	}

	return (1);
}
