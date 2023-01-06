#include "main.h"
#include <string.h>


/**
 * strcontain - function to check if character c is in string s
 * @s: the string to be scanned
 * @c: the character to be checked for
 * Return: 1 if exists, 0 otherwise
 */

int strcontain(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (1);
	}

	return (0);
}

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
		if (strcontain(accept, s[i]) != 0)
			return (&s[i]);
	}

	if (strcontain(accept, s[i]) != 0)
		return (&s[i]);

	return (NULL);
}

