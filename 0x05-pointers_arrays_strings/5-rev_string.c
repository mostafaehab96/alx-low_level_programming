#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string we need to reverse
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	int j = 0;
	char tmp;

	for (i = length - 1; i >= 0; i--)
	{
		if (j >= i)
			break;
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
	}
}
