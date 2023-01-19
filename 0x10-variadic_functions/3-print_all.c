#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_arg - takes a variadic list of argument and print the next argument
 * @args: the list of arguments
 * @type: a character representig the type of the argument
 * Return: 1 if a valid type passed, -1 otherwise
 */

int print_arg(va_list *args, char type)
{
	int c;
	float f;
	int num;
	char *string;

	switch (type)
	{
		case 'c':
			c = va_arg(*args, int);
			printf("%c", c);
			return (1);
		case 'i':
			num = va_arg(*args, int);
			printf("%i", num);
			return (1);
		case 'f':
			f = (float) va_arg(*args, double);
			printf("%f", f);
			return (1);
		case 's':
			string = va_arg(*args, char*);
			printf("%s", string);
			return (1);
		default:
			return (-1);
	}
}

/**
 * print_all - prints everything passed to it
 * @format: the format of every argument passed to the fuction
 * c: char, s: string, f: float, i: integer
 * any other character will be ignored
 */

void print_all(const char * const format, ...)
{
	int i = 0;
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
		r = print_arg(&args, format[i]);
		if (r > 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}

