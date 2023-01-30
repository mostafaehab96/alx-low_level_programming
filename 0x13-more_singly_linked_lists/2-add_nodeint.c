#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - insert a new node at the begining of a list
 * @head: a pointer to the head of the list
 * @n: the integer to set for the new element
 * Return: a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = (int) n;
	node->next = *head;
	*head = node;

	return (node);
}
