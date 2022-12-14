#include <stdio.h>

/**
 * main - Entry point, prints the first 98 Fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	double n;
	double first = 1;
	double second = 2;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
		{
			printf("1, ");
			continue;
		}
		if (i == 1)
		{
			printf("2, ");
			continue;
		}

		n = first + second;
		first = second;
		second = n;

		printf("%.0lf", n);

		if (i < 97)
			printf(", ");
	}

	printf("\n");

	return (0);
}
