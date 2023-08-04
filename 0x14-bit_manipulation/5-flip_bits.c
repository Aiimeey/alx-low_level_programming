#include "main.h"
/**
 * flip_bits - Count the number of bits needed to convert one number to another
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 * Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s, j = 1;
	unsigned int c = 0;

	s = n ^ m;

	while (s)
	{
		if ((s & j) == 1)
			c++;
		s = s >> 1;
	}
	return (c);
}
