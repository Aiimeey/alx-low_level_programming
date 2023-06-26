#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int l = 0, i;

	while (*s != '\0')
	{
		s++;
		l++;

	}


	for (i = l; i >= 0; i--)
	{
		_putchar (*s);
		s--;
	}
	_putchar('\n');
}
