#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_strings - Print a number of strings with a specified separator
 * @separator: The string separator to be printed between strings
 * @n: The number of strings to print
 * @...: The list of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);

		if (s == NULL || strcmp(s, "NULL") == 0)
			printf("(nil)");
		else
		{
			printf("%s", s);

			if (separator == NULL || *separator == '\0')
				continue;
			if (i != n - 1)
				printf("%s", separator);
		}
	}

	va_end(arg);
	printf("\n");
}
