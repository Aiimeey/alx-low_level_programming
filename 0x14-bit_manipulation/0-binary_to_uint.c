#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * _pow - Computes the power of a number
 * @a: The base value
 * @b: The exponent
 *
 * Return: The result
 */
unsigned int _pow(int a, int b)
{
	unsigned int s = 1;

	for (; b > 0; b--)
	{
		s *= a;
	}
	return (s);
}
/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: Pointer to a string containing the binary number
 *
 * Return: The converted unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, s = 0;
	int c, i = 0;

	if (b == NULL)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}

	c--;
	for (i = 0; c >= 0; i++)
	{
		a = b[i] - '0';
		s = s + (a * _pow(2, c--));
	}

	return (s);
}

