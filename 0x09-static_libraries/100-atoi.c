#include "main.h"
#include <ctype.h>

/**
 * _atoi - extract first number from a string
 * @s: string containing number
 *
 * Return: the integer which is extracted
 */

int _atoi(char *s)
{
	int negative = 1;
	int number_start = 0;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			negative *= -1;
		}
		else if (isdigit(s[i]))
		{
			number_start = 1;
			result = result * 10 + ((s[i] - '0') * negative);
		}
		else
		{
			if (number_start)
				break;
		}
		i++;
	}

	return (result);

}
