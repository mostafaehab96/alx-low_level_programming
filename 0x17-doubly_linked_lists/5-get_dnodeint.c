#include "lists.h"

/**
 * get_dnodeint_at_index - searches for a node in list with index
 * @head: the head of the list
 * @index: the index of the wanted list
 * Return: the wanted node if found or NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (index < 0)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head)
			head = head->next;
		else
			break;
	}
	return (head);
}
