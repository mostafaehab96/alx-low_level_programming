#include "main.h"
#include <ctype.h>

/**
 * rot13 - encode a string to rot13 encoding
 * @s: the string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i = 0;
	int l;

	while (s[i] != '\0')
	{
		if (isalpha(s[i]))
		{
			l = s[i] - (toupper(s[i]) - 'A');
			s[i] = ((s[i] + 13) % l % 26) + l;
			i++;
			continue;
		}

		i++;
	}

	return (s);
}
