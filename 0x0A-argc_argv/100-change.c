#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculates the minimum number of coins to change for money
 * @argc: the arguments count, should be 2
 * @argv: the arguments, should be the amount of money
 * Return: 0 if given a correct argc, 1 otherwise
 */

int main(int argc, char **argv)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int cents;
	int i = 0;
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= coins[i])
		{
			cents -= coins[i];
			result++;
		}
		else
			i++;
	}

	printf("%i\n", result);
	return (0);
}
