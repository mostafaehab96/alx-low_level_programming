#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node in specified position
 * in a doubly list
 * @h: a pointer to the head of the list
 * @idx: the index position
 * @n: the data of the new node
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *p;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	p = *h;
	if (idx == 0)
	{
		new->next = p;
		new->prev = NULL;
		if (p)
			p->prev = new;
		*h = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (p == NULL)
		{
			free(new);
			return (NULL);
		}
		p = p->next;
	}
	new->next = p->next;
	new->prev = p;
	if (p->next)
		(p->next)->prev = new;
	p->next = new;

	return (new);
}

