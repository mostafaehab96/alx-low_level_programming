#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates a random password based on current time
 * Return: Always 0
 */

int main(void)
{
	long t = time(NULL);
	int r;
	int i;

	srand((unsigned int) t);
	for (i = 0; i < 9; i++)
	{
		r = rand() % 10;
		printf("%i", r % 10);
	}

	return (0);
}
