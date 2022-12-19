#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string we need to reverse
 */

void rev_string(char *s)
{
	int length = strlen(s);
	char copy[50];
	int i;
	int j = 0;

	copy = strcpy(copy, s);

	for (i = length - 1; i >= 0; i--)
	{
		s[i] = copy[j];
		j++;
	}
}
