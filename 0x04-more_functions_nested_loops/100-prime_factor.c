#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime of number 612852475143
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int x = 612852475143;
	int i;
	int end = (int) sqrt((double) x);

	while (x % 2 == 0)
	{
		x /= 2;
	}

	for (i = 3; i <= end; i += 2)
	{
		while (x % i == 0)
		{
			x /= i;
		}
	}

	printf("%li\n", x);

	return (0);
}
