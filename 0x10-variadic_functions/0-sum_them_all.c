#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Calculate the sum of a variable number of integers
 * @n: The number of integers to sum
 * @...: The list of integers to add
 *
 * Return: The sum of all the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);


	return (sum);
}
