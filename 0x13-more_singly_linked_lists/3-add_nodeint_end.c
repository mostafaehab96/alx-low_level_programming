#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - appends a new node at the end of list
 * @head: a pointer to the first head
 * @n: the integer to set for the new node
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = (int) n;
	node->next = NULL;

	if (p == NULL)
	{
		*head = node;
	}
	else
	{
		while (p->next)
		{
			p = p->next;
		}
		p->next = node;
	}

	return (node);
}
