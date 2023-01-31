#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given postion
 * @head: a pointer to the head
 * @index: the index we want to delete
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *q = NULL;
	listint_t *p = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
		return (1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			q = p;
			p = p->next;
			if (p == NULL)
				return (-1);
		}
		q->next = p->next;
		free(p);
		return (1);
	}
}
