#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t (linked list)
 * @h: the head node of linked list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h; /* pointer to the first head */
	size_t count = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", p->len, p->str);
		p = p->next;
		count++;
	}

	return (count);
}

