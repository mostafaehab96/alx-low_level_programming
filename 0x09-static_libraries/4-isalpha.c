#include <ctype.h>

/**
 * _isalpha - checks if the letter c is alphabetical letter
 *@c: The character to check
 *
 * Return: 1 if is alphabetical, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
