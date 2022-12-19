#include "main.h"

/**
 * _strlen - count the letters in a string
 * @s: string to be counted
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
