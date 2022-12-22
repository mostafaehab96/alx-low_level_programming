#include "main.h"

/**
 * _strncpy - copies n bytes from a string src to a buffer dest
 * @dest: the destination buffer
 * @src: the source string
 * @n: the number of bytes to be copied
 * Return: pointer to desitination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;

		dest[i] = src[i];
	}

	dest[i] = '\0';
}