#include "main.h"
/**
 * sqrt_r - returns the natural square root of a number
 * @n: input
 * @i:  value to check for the square root
 * Return: The natural square root of 'n' if found, otherwise -1
 */
int sqrt_r(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_r(n, i + 1));
}
/**
 * _sqrt_recursion - Helper function to perform the recursive calculation
 * @n: number to calculate the square root of
 * Return: the natural square root of 'n' if found, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_r(n, 0));
}
