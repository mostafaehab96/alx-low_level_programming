#include "main.h"

/**
 * _strchr - finds the first occurence of the character c in a string
 * @s: the string to search for the character in it
 * @c: the character to be found
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (s[i] == c)
		return (&s[i]); /* for the null terminator */
	return (0);
}
