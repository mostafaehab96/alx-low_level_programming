#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_all_digit - checks that every character in a given string is digit
 * @s: the string to be checked
 * Return: 1 if all characters are digits, 0 otherwise
 */

int is_all_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}

	return (1);
}

/**
 * main - adds all integers that passed as arguments and prints them
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 if numbers are intgers, 1 otherwise
 */

int main(int argc, char **argv)
{
	int result = 0;
	int i;
	int n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (!is_all_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += n;
	}
	printf("%i\n", result);
	return (0);
}
