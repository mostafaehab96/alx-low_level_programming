#include <stdio.h>

/**
 * main - prints argument count
 * @argc: arguments count
 * @argv: the arguemnts
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
