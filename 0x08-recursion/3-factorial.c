#include "main.h"

/**
 * factorial - calculates factorial of integer
 * @n: the integer we need to calculate it's factorial
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
