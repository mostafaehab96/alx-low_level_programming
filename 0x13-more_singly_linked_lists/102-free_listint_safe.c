#include "lists.h"
#include <stdlib.h>

/**
 * count_safe - counts the nodes in a list even if loop exists
 * @head: the head of the list
 * Return: the count
 */
size_t count_safe(listint_t *head)
{
	listint_t *slow,
			*fast,
			*junction;
	size_t count = 0;

	if (head == NULL)
		return (0);
	slow = fast = junction = head;

	while (fast && fast->next)
	{
		count++;
		slow = slow->next;
		fast = fast->next;
		if (fast)
			fast = fast->next;

		if (fast == slow)
		{
			while (junction != fast)
			{
				fast = fast->next;
				junction = junction->next;
			}
			break;
		}
	}

	while (slow != NULL)
	{
		if (slow == junction)
			break;
		slow = slow->next;
		count++;
	}
	return (count);
}


/**
 * free_listint_safe - frees all nodes in a list even if loop exists
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count;
	size_t i;
	listint_t *p = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	count = count_safe(*h);
	for (i = 0; i < count; i++)
	{
		p = *h;
		*h = (*h)->next;
		free(p);
	}
	if (*h)
		*h = NULL;

	h = NULL;
	return (count);
}
