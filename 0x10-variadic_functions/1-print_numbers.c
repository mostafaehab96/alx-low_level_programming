#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints integers passed to it separated by separator
 * @separator: the separator to be used
 * @n: the count of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;
	const char *sep = "";

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator != NULL)
		sep = separator;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(numbers, int));

		if (i < n - 1)
			printf("%s", sep);
	}
	va_end(numbers);

	printf("\n");
}
