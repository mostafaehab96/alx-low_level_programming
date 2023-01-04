#include "main.h"

/**
 * sub - function that calculates how many time
 * you would substract integer from an odd number to get 0
 * @x: the integer to substract from
 * @y: the odd number to substract
 * Return: times to substract to get to 0, or negative number
 * if not able to get to 0
 */
int sub(int x, int y)
{
	if (x - y == 0)
		return (1);
	if (x - y < 0)
		return (-10000);
	return (1 + sub(x - y, y + 2));
}

/**
 * _sqrt_recursion - calculates a perfect square root of an integer
 * @n: the integer to calculate it's square
 * Return: the square root if it's prefect, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	int i = sub(n, 1);

	if (i < 0)
		return (-1);

	return (i);
}
