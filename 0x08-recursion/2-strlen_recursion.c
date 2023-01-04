#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string to be scanned for it's length
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(&s[1]));
}
