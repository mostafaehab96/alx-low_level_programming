#include <ctype.h>

/**
 * _isupper - checks if the char c is uppercase
 * @c: the character to check it's case
 *
 * Return: 1 if c is upper and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}

	return (0);
}
