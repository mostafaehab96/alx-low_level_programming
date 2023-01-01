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
	char printable_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";

	srand((unsigned int) t);
	for (i = 0; i < 9; i++)
	{
		r = rand() % (sizeof(printable_chars) - 1);
		printf("%c", printable_chars[r]);
	}

	return (0);
}
