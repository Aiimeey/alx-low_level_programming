#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print a variable number of integers with a separator
 * @separator: The string separator to be printed between numbers
 * @n: The number of integers to print
 * @...: The list of integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);

		if (separator == NULL || *separator == '\0')
			continue;
		if (i != n - 1)
			printf("%s", separator);
	}

	va_end(arg);
	printf("\n");

}
