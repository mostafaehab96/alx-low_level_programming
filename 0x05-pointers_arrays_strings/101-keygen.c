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
	char pass[4];
	int r;
	int i;

	srand((unsigned int) t);
	for (i = 0; i < 3; i++)
	{
		r = rand() % 10;
		pass[i] = r + '0';
	}
	pass[i] = '\0';

	printf("%s\n", pass);

	return (0);
}
