#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that takes two integer arguments and
 * operator between them and print the result if succeeded
 * @argc: the arguments count should be 4
 * @argv: the arguments
 * Return: 0 if Success
 */

int main(int argc, char *argv[])
{
	char *op;
	int num1;
	int num2;
	int result;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	f = get_op_func(op);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(num1, num2);
	printf("%i\n", result);
	return (0);
}

