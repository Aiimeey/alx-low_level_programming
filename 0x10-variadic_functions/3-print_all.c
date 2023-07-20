#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
	int j = 0;
	const char *f;
	char *p = "";

	va_list(arg);

	va_start(arg, format);

	while(format && format[j])
	{
		f = format + j;
		switch(*f)
		{   case'c': 
			printf("%s%c",p,va_arg(arg, int)); 
			break;
			case'i': 
			printf("%s%d",p,va_arg(arg, int)); 
			break;
			case'f': 
			printf("%s%f",p,va_arg(arg, double)); 
			break;
			case's': 
			printf("%s%s",p,va_arg(arg, char *)); 
			break;
			default: j++;
				 continue;
		}

		p = ", ";

		j++;
	}

	va_end(arg);
	printf("\n");
}

