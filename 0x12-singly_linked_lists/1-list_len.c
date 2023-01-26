#include "lists.h"


/**
 * list_len - count the number of element in list_t
 * @h: the head of the list
 * Return: the count
 */

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	return (count);
}
