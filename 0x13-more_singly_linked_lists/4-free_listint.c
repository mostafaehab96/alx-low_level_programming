#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *p = NULL;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
