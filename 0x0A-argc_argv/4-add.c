#include <stdio.h>
#include <stdlib.h>

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
		if (n == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		result += n;
	}
	printf("%i\n", result);
	return (0);
}
