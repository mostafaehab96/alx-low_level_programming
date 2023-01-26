#include "lists.h"
#include <stdlib.h>

/**
 * free_list - deletes all nodes in a list
 * @head: the head of list to be deleted
 */
void free_list(list_t *head)
{
	list_t *p = NULL;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
