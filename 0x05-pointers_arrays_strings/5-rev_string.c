#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string we need to reverse
 */

void rev_string(char *s)
{
	int length = strlen(s);
	char copy[length];
	int i;
	int j = 0;

	for (i = 0; i < length; i++)
	{
		copy[i] = s[i];
	}

	for (i = length - 1; i >= 0; i--)
	{
		s[i] = copy[j];
		j++;
	}
}
