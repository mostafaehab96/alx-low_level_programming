#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specified index
 * @head: a pointer to the head of the list
 * @index: a position to delete it's node
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	p = *head;
	if (index == 0)
	{
		*head = p->next;
		free(p);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (p == NULL)
			return (-1);
		p = p->next;
	}
	(p->prev)->next = p->next;
	if (p->next)
		(p->next)->prev = p->prev;
	free(p);

	return (1);
}



