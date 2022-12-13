#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Alwasy 0 (Success)
 */

int main(void)
{
	char *word = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}

	return (0);
}
