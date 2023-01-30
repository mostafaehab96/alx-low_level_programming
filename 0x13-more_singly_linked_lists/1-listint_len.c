#include "lists.h"

/**
 * listint_len - counts the elements in linked list
 * @h: the head of the linked list
 * Return: the count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	while (p)
	{
		count++;
		p = p->next;
	}

	return (count);
}
