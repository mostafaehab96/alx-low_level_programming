#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: the head of the list
 * Return: the address of the node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow,
			*fast;

	slow = fast  = head;

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
			slow = head;
			while (slow != fast)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (slow);
		}
	}

	return (NULL);
}

