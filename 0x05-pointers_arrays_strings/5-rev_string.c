#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string we need to reverse
 */

void rev_string(char *s)
{
	int length = strlen(s);
	const int x = length;
	char copy[x];
	int i;
	int j = 0;

	strcpy(copy, s);

	for (i = length - 1; i >= 0; i--)
	{
		s[i] = copy[j];
		j++;
	}
}
