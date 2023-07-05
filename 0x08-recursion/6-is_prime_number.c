#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 *
 * @n: The number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_r(n, n - 1));
}

/**
 * prime_r - Recursive function to check if a number is prime
 *
 * @n: The number to be checked
 * @i: The divisor
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int prime_r(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_r(n, i - 1));
}
