#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the new string or NULL if any failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = s1 == NULL ? 0 : strlen(s1);
	int len2 = s2 == NULL ? 0 : strlen(s2);
	int i;
	char *new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		new_str[i + len1] = s2[i];
	}
	new_str[len1 + len2] = '\0';

	return (new_str);
}
