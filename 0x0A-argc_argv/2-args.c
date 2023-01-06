#include <stdio.h>

/**
 * main - prints all argument passed to it including the first
 * @argc: arguments count
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
