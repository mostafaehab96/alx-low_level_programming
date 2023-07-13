#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searchs for a value in a linked list
 * @list: the list to search at
 * @size: the size of the list
 * @value: the value to search for
 * Return: a pointer to the node holding the value
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0;
	listint_t *p, *t;

	if (!list)
		return (NULL);

	p = list;
	while (p->n < value && p->next != NULL)
	{
		t = p;
		i += jump;
		while (p->index < i && p->next)
			p = p->next;
		printf("Value checked at index [%li] = [%i]\n", p->index, p->n);
	}
	printf("Value found between indexes [%li] and [%li]\n", t->index, p->index);
	while (t && t->index <= p->index)
	{
		printf("Value checked at index [%li] = [%i]\n", t->index, t->n);
		if (t->n == value)
			return (t);
		t = t->next;
	}
	return (NULL);
}

