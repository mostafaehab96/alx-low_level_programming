#include <stdio.h>

/**
 * print_zeros - prints 0 n times
 * @n: number of zeros to be printed
 */

void print_zeros(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("0");
	}
}

/**
 * count_digits - count number of digits in a number
 * @n: the number to be counted
 *
 * Return: the count
 */

int count_digits(long int n)
{
	if (n < 10)
		return (1);
	return (count_digits(n / 10) + 1);
}

/**
 * print_halfs - prints a long number separated into two halfs
 * @first: the first half
 * @second: the second half
 * @width: the maximum width of the number
 * this is spicified for any leading zeros
 */

void print_halfs(long int first, long int second, int width)
{
	int count = count_digits(second);

	printf("%li", first);
	if (count < width)
	{
		print_zeros(width - count);
	}
	printf("%li", second);
}

/**
 * main - Entry point, prints first 98 fibonacci numbers
 *
 * Return: 0 (Success)
 */


int main(void)
{

	long int half = 1000000000000;
	long int first_h = 0;
	long int first_l = 1;
	long int second_h = 0;
	long int second_l = 2;
	long int third_h = 0;
	long int third_l = 0;
	int i;

	printf("1, 2, ");

	for (i = 2; i < 98; i++)
	{
		third_l = first_l + second_l;
		third_h = first_h + second_h + (third_l / half);
		third_l %= half;

		if (third_h > 0)
		{
			print_halfs(third_h, third_l, 12);
		}
		else
		{
			printf("%li", third_l);
		}
		if (i < 97)
			printf(", ");

		first_h = second_h;
		first_l = second_l;
		second_h = third_h;
		second_l = third_l;

	}


	printf("\n");
	return (0);
}
