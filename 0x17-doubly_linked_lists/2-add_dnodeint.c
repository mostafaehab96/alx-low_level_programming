#include "lists.h"


/**
 * add_dnodeint - adds node at the begining of linked list
 * @head: a pointer to the head of the list
 * @n: the data of the new node
 * Return: a pointer to the head of the node (new node)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
