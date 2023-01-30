#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - append node at the end of a list
 * @head: a pointer to a pointer of the head
 * @str: the string to be added to the new node
 * Return: a pointer to the new node if success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int len;
	list_t *node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (node == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(node);
		return (NULL);
	}
	for (len = 0; s[len] != '\0';)
		len++;
	node->str = s;
	node->len = len;
	node->next = NULL;

	if (last == NULL)
		*head = node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}

	return (node);
}

