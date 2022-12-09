#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j;
	int s;

	while (i < 9)
	{
		j = i + 1;
		while (j < 9)
		{
			s = j + 1;
			while (s < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(s + '0');
				if (i == 7 && j == 8 && s == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
				s++;
			}
			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);

}
