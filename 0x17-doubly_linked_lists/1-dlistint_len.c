#include "lists.h"

/**
 * dlistint_len - computes the size of a linked list
 * @h: the head of the list
 * Return: the count of the nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
