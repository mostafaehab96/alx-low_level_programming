#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints everything passed to it
 * @format: the format of every argument passed to the fuction
 * c: char, s: string, f: float, i: integer
 * any other character will be ignored
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	int c;
	int num;
	float f;
	va_list args;
	int r;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				r = printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				r = printf("%i", num);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				r = printf("%f", f);
				break;
			case 's':
				string = va_arg(args, char*);
				if (string == NULL)
					r = printf("(nil)");
				else
					r = printf("%s", string);
				break;
			default:
				r = -1;
				break;
		}

		if (r > 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}

