#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings together
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (1)
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				j++;
				i++;
			}
			break;
		}
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
