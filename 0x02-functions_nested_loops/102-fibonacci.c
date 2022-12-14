#include <stdio.h>

/**
 * fib - calculate the fibonacci number in position n
 * @n: the position of fibonacci number is a sequence
 * @memory: the cache to hold the previous fibonacci numbers
 *
 * Return: the calculated fibonacci number
 */

long int fib(int n, long int *memory)
{
	if (memory[n] == 0)
		memory[n] = fib(n - 1, memory) + fib(n - 2, memory);

	return (memory[n]);
}

/**
 * main - Entry point, print all fibonacci numbers to 50 starting 1, 2
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	long int memory[50] = {0};

	memory[0] = 1;
	memory[1] = 2;

	for (i = 0; i < 50; i++)
	{
		printf("%li", fib(i, memory));
		if (i < 49)
			printf(", ");
	}

	printf("\n");

	return (0);
}
