#include "main.h"
/**
 * set_bit - Sets the value of a specific bit in an unsigned long integer
 * @n: pointer to the unsigned long integer
 * @index: The index of the bit to set
 * Return: 1 on success or -1 oterwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0x01;

	m = m << index;

	if (m == 0x00)
		return (-1);

	*n |= m;

	return (1);
}
