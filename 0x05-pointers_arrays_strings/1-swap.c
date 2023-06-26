#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: the first int
 * @b: the second int
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}
