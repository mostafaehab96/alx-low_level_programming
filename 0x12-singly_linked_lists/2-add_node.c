#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add new node at the begining of a list
 * @head: the head of the list
 * @str: the string to be added in the list node
 * Return: a pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *s;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (str == NULL)
	{
		node->str = NULL;
		node->len = 0;
	}
	else
	{
		s = strdup((char *) str);
		node->str = s;
		node->len = strlen(s);
	}

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
