#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: string to be scanned
 * @accept: the string containing the bytes to check for
 * Return: a pointer to the first occurrence of any byte in accept in string s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strchr(accept, s[i]) != NULL)
			return (&s[i]);
	}

	if (strchr(accept, s[i]) != NULL)
		return (&s[i]);

	return (NULL);
}

