#include "main.h"
/**
 * get_endianness - Checks the endianness of the current system
 *
 * Return: 1 if the system is little-endian, 0 if the system is big-endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
