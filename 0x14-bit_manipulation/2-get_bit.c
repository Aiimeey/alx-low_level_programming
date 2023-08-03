#include "main.h"
/**
 * get_bit - Gets the value of a specific bit
 * @n: The unsigned long integer from to get the bit
 * @index: The index of the bit to retrieve
 * Return: The value of the bit at the specified index, -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int r = 0;
	unsigned long int m = 0x01;

	m = m << index;
	if (m == 0)
		return (-1);

	r = ((n & m)) ? 1 : 0;

	return (r);

}
