#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers passed as arguments
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 if two arguments was passed as int, 1 otherwise
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", result);

	return (0);
}
