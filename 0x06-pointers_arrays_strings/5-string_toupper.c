#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Converts a string to uppercase
 * @s: the string to be converted
 * Return: converted string (pointer to first character)
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}

	return (s);
}
