#include "main.h"
/**
 * clear_bit - Clears the value of a specific bit
 * @n: pointer to the unsigned long integer
 * @index: The index of the bit to clear
 * Return: 1 on success or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0x01;

	m = ~(m << index);
	if (m == 0x00)
		return (-1);
	*n &= m;

	return (1);
}

