#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string we need to reverse
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i = length;
	int j = 0;
	char tmp;

	while (i != j)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
