#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the node at specific index
 * @head: the head of the node
 * @index: the index we want
 * Return: the wanted node if found, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
