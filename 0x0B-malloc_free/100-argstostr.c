#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: arguments
 * Return: string contian all arguments separated by newline
 */

char *argstostr(int ac, char **av)
{
	int i;
	int len = 0;
	char *new;
	int j;
	int ctr = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int) strlen(av[i]); j++)
		{
			new[ctr] = av[i][j];
			ctr++;
		}
		new[ctr++] = '\n';
	}

	return (new);
}
