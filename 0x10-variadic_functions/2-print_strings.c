#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_strings - prints strings separated by a separator
 * @separator: the separator to be used
 * @n: the count of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *sep = "";
	char *word;
	va_list strings;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);

	if (separator != NULL)
		sep = separator;

	for (i = 0; i < n; i++)
	{
		word = va_arg(strings, char*);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (i < n - 1)
			printf("%s", sep);
	}

	va_end(strings);
	printf("\n");
}
