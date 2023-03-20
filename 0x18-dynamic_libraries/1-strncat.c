#include "main.h"

/**
 * _strncat - append n bytes from string src to string dest
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to copy from source
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (1)
	{
		if (dest[i] == '\0')
		{
			while (j < n)
			{
				if (src[j] == '\0')
					break;
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
