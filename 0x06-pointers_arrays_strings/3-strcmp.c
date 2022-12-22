#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if two strings are the same
 * int less than 1 if s1 comes before s2
 * int bigger than 1 if s1 comes after s2
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] != '\0')
			return (-1);
		if (s2[i] == '\0' && s1[i] != '\0')
			return (1);

		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}

	return (0);
}
