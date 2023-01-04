#include "main.h"

/**
 * isPrime - checks if the number is a prime
 * @n: the number to be checked
 * @i: the divisor
 * Return: 1 if the number is prime, 0 otherwise
 */
int isPrime(int n, int i)
{
	if (n <= 2)
		return (n == 2 ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (isPrime(n, i + 1));
}

/**
 * is_prime_number - checks if the number is prime
 * @n: the number to be checked
 * Return: 1 if its a prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}
