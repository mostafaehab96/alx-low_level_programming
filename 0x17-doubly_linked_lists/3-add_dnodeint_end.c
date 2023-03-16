#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of the double linked list
 * @head: a pointer to the head of the list
 * @n: the data for the new node
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *p;

	new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	p = *head;
	new->n = n;
	if (p)
	{
		while (p->next)
			p = p->next;
		p->next = new;
	}
	else
		*head = new;
	new->prev = p;
	new->next = NULL;

	return (new);
}


