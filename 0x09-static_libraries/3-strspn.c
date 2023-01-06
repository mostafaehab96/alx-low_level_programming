#include "main.h"

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
 * _strspn - a function that calculates the length of
 * initial substring of another string
 * @s: string to be scanned
 * @accept: the string containing the characters to match
 * Return: the number of bytes in the string s that consitsts only from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!strcontain(accept, s[i]))
			return (result);
		result += 1;
	}

	if (strcontain(accept, s[i]))
		result += 1;

	return (result);
}
