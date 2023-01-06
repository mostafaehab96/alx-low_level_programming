#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - searches in haystack for the first occcurence of needle
 * @haystack: the string to be searched in
 * @needle: the string to be searched for
 * Return: the a substring of haystack that begins with needle
 * if it was found or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int found = 0;
	int ndl_len = strlen(needle);
	int hay_len = strlen(haystack);
	int ctr;

	if (hay_len < ndl_len)
		return (NULL);

	if (ndl_len == 0)
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			ctr = 0;
			found = 1;
			for (j = i; j < i + ndl_len; j++)
			{
				if (haystack[j] != needle[ctr])
				{
					found = 0;
					break;
				}
				ctr++;
			}

			if (found)
				return (&haystack[i]);
		}
		i++;
	}

	return (NULL);
}
