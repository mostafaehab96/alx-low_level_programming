#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - fress a list
 * @head: a pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *p = NULL;

	while (*head != NULL)
	{
		p = *head->next;
		free(*head);
		*head = p;
	}
	head = NULL;
}
