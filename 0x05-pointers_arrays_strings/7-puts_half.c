#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int l = 0, i, n;

	while (*str != '\0')
	{
		str++;
		l++;
	}

	n = l  / 2;
	str = str - l;

	for (i = n; i < l; i++)
	{

		_putchar(*(str + i));

	}
	_putchar('\n');
}
