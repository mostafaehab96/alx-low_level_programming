#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements in linked list
 * @h: the head of the list
 * Return: the size of the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	int n;
	size_t count = 0;

	while (p)
	{
		n = p->n;
		printf("%i\n", n);
		p = p->next;
		count++;
	}

	return (count);
}
