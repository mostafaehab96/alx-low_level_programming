#include "lists.h"

/**
 * sum_listint - sums all integer data in the list
 * @head: the head of the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}

