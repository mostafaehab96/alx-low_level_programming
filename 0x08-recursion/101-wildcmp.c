#include "main.h"

/**
 * wildcmp - compares two strings where second string
 * may contain wildcard '*' which means any charcter
 * @s1: the first string
 * @s2: the second string which contains '*'
 * Return: 1 if two strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);

	/* skip any consecutive '*' */
	if (s2[0] == '*' && s2[1] == '*')
		return (wildcmp(s1, s2 + 1));

	/* make sure the characters after '*' are present in first string */
	if (s2[0] == '*' && s2[1] != '\0' && s1[0] == '\0')
		return (0);

	/* if the first characters identical compare the next */
	if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));

	/**
	 * if there is '*', then we consider the current
	 * character is the first string or we ignore
	 * the current character is the first string
	 */
	if (s2[0] == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);

}
