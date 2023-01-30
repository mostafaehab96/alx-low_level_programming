#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops the first element in a list
 * @head: pointer to the head of the list
 * Return: the integer data in the first element
 */
int pop_listint(listint_t **head)
{
	listint_t *p = NULL;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	p = *head;
	n = p->n;
	*head = (*head)->next;
	free(p);

	return (n);
}
