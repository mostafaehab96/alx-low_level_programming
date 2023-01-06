#include "main.h"

/**
 * _strcpy - copys string from src to dest
 * @dest: the destination to paste src into
 * @src: the source to be copied
 *
 * Return: returns a pointer to destination
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
