#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: first integer
 * @b: second integer
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two intgers
 * @a: first integer
 * @b: second integer
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the numerator
 * @b: the denominator
 * Return: the result of division if success
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - gets the remainder of integer divided by another integer
 * @a: first integer
 * @b: second integer
 * Return: the remainder if success
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}








