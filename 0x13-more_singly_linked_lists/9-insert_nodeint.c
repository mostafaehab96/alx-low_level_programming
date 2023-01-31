#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: a pointer to the head of list
 * @idx: the position for inserting
 * @n: the integer data for the new node
 * Return: a pointer to the new node if success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *p = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			p = p->next;
		}
		if (p == NULL)
			return (NULL);
		node->next = p->next;
		p->next = node;
	}

	return (node);
}


