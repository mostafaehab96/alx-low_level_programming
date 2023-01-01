#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * get_value - a fuction that takes a string and return integer value of
 * a digit character in the reverse of position i
 * @s: the string to export the value from
 * @size: the length of the string
 * @i: the position of the character
 *
 * Return: the integer value of the char if exists or 0 if not
 */

int get_value(char *s, int size, int i)
{
	if (i < size)
		return (s[size - i - 1] - '0');
	return (0);
}

/**
 * reverse - a function that reverse a string
 * @s: string to be reversed
 * @size: size of the string
 * Return: the reversed string
 */

char *reverse(char *s, int size)
{
	int i;
	int j = size - 1;
	int tmp;

	for (i = 0; i < size; i++)
	{
		if (i >= j)
			break;
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
	}

	return (s);
}

/**
 * infinite_add - a function that takes to strings and add them as integers
 * @n1: the first string
 * @n2: the second string
 * @r: the buffer to restore the result
 * @size_r: the size of the buffer
 * Return: the result string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = strlen(n1);
	int len_n2 = strlen(n2);
	int width = len_n1 > len_n2 ? len_n1 : len_n1;
	int sum = 0;
	int carry = 0;
	int i;
	int first;
	int second;
	int len_r;

	for (i = 0; i < width; i++)
	{
		if (i >= size_r)
			return (0);

		first = get_value(n1, len_n1, i);
		second = get_value(n2, len_n2, i);
		sum = first + second + carry;
		carry = 0;
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		r[i] = sum + '0';
	}

	if (i == size_r)
		return (0);

	if (carry)
	{
		if (i >= size_r - 1)
			return (0);
		r[i++] = carry + '0';
	}
	r[i] = '\0';
	len_r = strlen(r);
	return (reverse(r, len_r));
}

