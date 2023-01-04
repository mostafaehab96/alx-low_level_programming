#include "main.h"

/**
 * _pow_recursion - calculates power of integer
 * @x: the integer to be calculated
 * @y: the power to be raised to
 * Return: the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
