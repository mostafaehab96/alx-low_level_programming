#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums every integer passed to it
 * @n: the count of integers that will be passed
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers; /* Declaring the argument list */

	if (n == 0)
		return (0);
	va_start(numbers, n); /* Intializing argument list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int); /* Get the next argument */
	}

	va_end(numbers); /* Free everything */
	return (sum);
}
