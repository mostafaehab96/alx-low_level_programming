#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string in the heap
 * @str: the string to be duplicated
 * Return: a pointer to the string
 */

char *_strdup(char *str)
{
	int size = strlen(str);
	int i;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(sizeof(char) * size);

	if (duplicate != NULL)
	{
		for (i = 0; i < size; i++)
		{
			duplicate[i] = str[i];
		}
		return (duplicate);
	}

	return (NULL);
}

