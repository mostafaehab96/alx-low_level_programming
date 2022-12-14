#include <stdio.h>

/**
 * main - Entry point, prints the first 98 Fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int n;
	unsigned long int first = 1;
	unsigned long int second = 2;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
			printf("1, ");
		if (i == 1)
			printf("2, ");

		n = first + second;
		first = second;
		second = n;

		printf("%lu", n);

		if (i < 97)
			printf(", ");
	}

	printf("\n");

	return (0);
}
