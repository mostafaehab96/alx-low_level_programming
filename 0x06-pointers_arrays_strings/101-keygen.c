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

	srand((unsigned int) t);
	r = rand();

	printf("%i", r);

	return (0);
}
