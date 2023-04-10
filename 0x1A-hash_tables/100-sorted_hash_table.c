#include "hash_tables.h"


shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
void insert_sorted(shash_table_t *ht, shash_node_t *node);
void free_node(shash_node_t *node);
shash_node_t *create_node(const char *key, const char *value);

/**
 * shash_table_create - creates a new empty sorted hash table
 * @size: the size of the hash table
 * Return: the new created hash table if succeed, NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (!table)
		return (NULL);

	table->array = malloc(sizeof(shash_node_t *) * size);

	if (!table->array)
		return (NULL);
	table->shead = NULL;
	table->stail = NULL;
	table->size = size;

	return (table);
}

/**
 * create_node - creates a new hash node
 * @key: the key of the node
 * @value: the value of the node
 * Return: the new node created
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));

	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);

	if (!new->key || !new->value)
		return (NULL);

	return (new);
}

/**
 * free_node - frees the created node
 * @node: the node to be freed
 */
void free_node(shash_node_t *node)
{
	free(node->value);
	free(node->key);
	free(node);
}

/**
 * insert_sorted - insertes a node of a hash table inside a sorted linked list
 * @ht: the hash table
 * @node: the node to be inserted
 */
void insert_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *p = ht->shead, *q = NULL;

	if (p == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		node->sprev = NULL;
		node->snext = NULL;
	}
	else
	{
		while (p && strcmp(node->key, p->key) >= 0)
		{
			q = p;
			p = p->snext;
		}
		if (p == ht->shead)
		{
			node->sprev = NULL;
			node->snext = p;
			p->sprev = node;
			ht->shead = node;
		}
		else
		{
			node->snext = p;
			node->sprev = q;
			q->snext = node;
			if (p)
				p->sprev = node;
			else
				ht->stail = node;
		}

	}
}

/**
 * shash_table_set - adds an element to the sorted hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key
 * Return: 1 if success 0 if fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp = NULL, **arr;
	unsigned long int index;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	new = create_node(key, value);
	if (!new)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	arr = ht->array;


	if (arr[index])
	{
		tmp = arr[index];
		while (tmp != NULL && strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		if (tmp)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			free_node(new);
		}
	}
	if (!tmp)
	{
		new->next = arr[index];
		arr[index] = new;
		insert_sorted(ht, new);
	}
	return (1);
}


/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *p;

	if (!ht)
		return;

	p = ht->shead;

	printf("{");
	while (p)
	{
		printf("'%s': '%s'", p->key, p->value);
		if (p->snext)
			printf(", ");
		p = p->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - prints the sorted hash table in reverse order
 * @ht: the hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *p;

	if (!ht)
		return;

	p = ht->stail;

	printf("{");
	while (p)
	{
		printf("'%s': '%s'", p->key, p->value);
		if (p->sprev)
			printf(", ");
		p = p->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the hash table
 * @ht: the hash table to be delted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *p;

	if (!ht)
		return;
	p = ht->shead;

	while (p && p->snext)
	{
		p = p->snext;
		free_node(p->sprev);
	}
	if (p)
		free_node(p);
	ht->shead = NULL;
	ht->stail = NULL;
	free(ht->array);
	free(ht);
}
