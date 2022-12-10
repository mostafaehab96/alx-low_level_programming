#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f1, f2, s1, s2;

	f1 = 0;
	f2 = 0;
	s1 = 0;
	s2 = 1;
	while (f1 < 10)
	{
		while (f2 < 10)
		{
			while (s1 < 10)
			{
				while (s2 < 10)
				{
					putchar(f1 + '0');
					putchar(f2 + '0');
					putchar(' ');
					putchar(s1 + '0');
					putchar(s2 + '0');
					if (!(f1 == 9 && f2 == 8 && s1 == 9 && s2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
					s2++;
				}
				s1++;
				s2 = 0;
			}
			f2++;
			s2 = f2 + 1;
			s1 = f1;
		}
		f1++;
		f2 = 0;
		s1 = f1;
		s2 = f2 + 1;
	}
	putchar('\n');
	return (0);
}
