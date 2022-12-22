#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * leet - encode string to 1337
 * @s: string to be encoded
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i = 0;
	char *l;
	int index;
	char letters[] = "AEOTL";
	char code[] = "43071";

	while (s[i] != '\0')
	{
		l = strchr(letters, toupper(s[i]));
		if (l != NULL)
		{
			index = 5 - strlen(l);
			s[i] = code[index];
		}
		i++;
	}

	return (s);
}
