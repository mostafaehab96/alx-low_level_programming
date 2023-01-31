#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to the head of the list
 * Return: the head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tail = NULL;
	listint_t *middle = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		tail = middle;
		middle = *head;
		*head = (*head)->next;
		middle->next = tail;
	}
	*head = middle;
	return (*head);
}
