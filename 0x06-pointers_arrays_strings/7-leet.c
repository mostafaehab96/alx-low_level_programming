#include "main.h"
#include <ctype.h>

/**
 * locate - locates character c in string s
 * @c: character to be located
 * @s: string to search in it
 * Return: the location of c in s
 */

int locate(char c, char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (toupper(c) == s[i])
			return (i);
		i++;
	}

	return (-1);
}

/**
 * leet - encode string to 1337
 * @s: string to be encoded
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i = 0;
	int l;
	char letters[] = "AEOTL";
	char code[] = "43071";

	while (s[i] != '\0')
	{
		l = locate(s[i], letters);
		if (l != -1)
		{
			s[i] = code[l];
		}
		i++;
	}

	return (s);
}
