#include "lists.h"
#include <stdio.h>

/**
 * find_loop - finds a loop in a list if exist
 * @head: the head of the list
 * Return: pointer to the junction if exist, NULL otherwise
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *slow,
			*fast,
			*junction;

	slow = fast = junction = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next;
		if (fast)
			fast = fast->next;
		else
			return (NULL);

		if (fast == slow)
		{
			while (junction != fast)
			{
				fast = fast->next;
				junction = junction->next;
			}
			return (junction);
		}
	}

	return (NULL);
}


/**
 * print_listint_safe - prints a list even if there was a loop in it
 * @head: the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *junction;
	listint_t *start = (listint_t *) head;
	int loop_started = 0;

	if (head == NULL)
		return (0);

	junction = find_loop((listint_t *) head);
	if (junction)
	{
		while (start != junction || !loop_started)
		{
			count++;
			printf("[%p] %i\n", (void *)start, start->n);
			if (start == junction)
				loop_started = 1;
			start = start->next;
		}
		printf("-> [%p] %i\n", (void *)junction, junction->n);
	}
	else
	{
		while (start)
		{
			count++;
			printf("[%p] %i\n", (void *)start, start->n);
			start = start->next;
		}
	}

	return (count);
}
