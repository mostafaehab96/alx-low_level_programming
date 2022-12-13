#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the integer to print it's last digit
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
