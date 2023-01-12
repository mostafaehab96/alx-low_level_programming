#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to add from the second string to the new string
 * Return: a new contatenated string located in heap
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = s1 == NULL ? 0 : strlen(s1);
	unsigned int len2 = s2 == NULL ? 0 : strlen(s2);
	unsigned int full_len = n > len2 ? len1 + len2 : len1 + n;
	char *new_str = malloc(sizeof(char) * full_len + 1);
	unsigned int i;

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = len1; i < full_len; i++)
	{
		new_str[i] = s2[i - len1];
	}
	new_str[i] = '\0';

	return (new_str);
}
