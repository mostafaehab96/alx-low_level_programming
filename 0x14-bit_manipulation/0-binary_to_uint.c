#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: the string represinting the binary
 * Return: the converted int if success or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len;
	int i;
	int power = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += 1 << power;
		else if (b[i] != '0')
			return (0);

		power++;
	}

	return (result);
}
