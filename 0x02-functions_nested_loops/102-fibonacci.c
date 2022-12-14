#include <stdio.h>

/**
 * fib - calculate the fibonacci number in position n
 * @n: the position of fibonacci number is a sequence
 *
 * Return: the calculated fibonacci number
 */

int fib(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (2);

	return (fib(n - 1) + fib(n - 2));
}

/**
 * main - Entry point, print all fibonacci numbers to 50 starting 1, 2
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%i, ", fib(i));
	}

	printf("\n");

	return (0);
}
