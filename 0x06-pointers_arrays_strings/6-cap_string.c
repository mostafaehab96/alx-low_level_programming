#include <ctype.h>
#include "main.h"

#define True 1
#define False 0

/**
 * check_existance - check if charcter c exist in string s
 * @c: character to search for
 * @s: string to search in
 * Return: true if it's exitst false otherwise
 */

int check_existance(char c, char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
			return (True);
		i++;
	}

	return (False);
}

/**
 * is_splitter - checks if character c is a splitter in a sentence
 * @c: character to check
 * Return: true if it is, false otherwise
 */

int is_splitter(char c)
{
	return (check_existance(c, " \n\t,.;!?\"(){}"));
}

/**
 * cap_string - capitalize a given string s
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;
	int new_word = True;

	while (s[i] != '\0')
	{
		if (isalnum(s[i]))
		{
			if (new_word)
			{
				s[i] = toupper(s[i]);
				new_word = False;
			}
		}
		else if (is_splitter(s[i]))
		{
			new_word = True;
		}
		i++;
	}

	return (s);
}
