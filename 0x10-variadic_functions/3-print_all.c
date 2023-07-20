#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - print a number of values based on a given format
 * @format: the format indicating the data types to print
 * @...: the list of values to print based on the format
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	const char *f;
	char *p = "";

	va_list arg;

	va_start(arg, format);

	while (format && format[j])
	{
		f = format + j;

		switch (*f)
		{
			case 'c':
				printf("%s%c", p, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", p, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", p, va_arg(arg, double));
				break;
			case 's':
				{
					char *str = va_arg(arg, char *);
					if (str == NULL || strcmp(str, "NULL") == 0)
						printf("%s(nil)", p);
					else
						printf("%s%s", p, str);
					break;
				}
			default:
				j++;
				continue;
		}

		p = ", ";
		j++;
	}

	va_end(arg);
	printf("\n");
}
