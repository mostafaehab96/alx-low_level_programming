#include "main.h"
#include <string.h>


/**
 * palindrome - checks if the given string is a palindrome
 * @str: the string to be checked
 * @start: the start of string
 * @end: the end of string
 * Return: 1 if is palindorme, 0 if not
 */

int palindrome(char *str, int start, int end)
{
	/* if there is one character return true */

	if (start == end)
		return (1);

	/* if the first char is not equal to the last return false */
	if (str[start] != str[end])
		return (0);

	/* if there are more that two chars check the middle substring */
	if (start < end + 1)
		return (palindrome(str, start + 1, end - 1));

	return (1);
}

/**
 * is_palindrome - checks if the given string is a palindrome
 * @s: the string to be checked
 * Return: 1 if is palindorme, 0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);

	return (palindrome(s, 0, len - 1));
}
