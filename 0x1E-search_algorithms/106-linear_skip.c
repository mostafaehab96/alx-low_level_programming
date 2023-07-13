#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searchs for a value in a linked list
 * @list: the list to search at
 * @value: the value to search for
 * Return: a pointer to the node holding the value
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *p, *t;

	if (!list)
		return (NULL);

	p = list;
	while (p->n < value && p->next != NULL)
	{
		t = p;
		if (p->express)
			p = p->express;
		else
			while (p->next)
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

