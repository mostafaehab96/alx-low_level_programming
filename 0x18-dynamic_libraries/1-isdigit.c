#include <ctype.h>

/**
 * _isdigit - checks if the char c is from 0 to 9
 * @c: the character to check if its a digit
 *
 * Return: 1 if is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}

	return (0);
}
