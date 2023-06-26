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
	str = str - l;

	if (l % 2 == 0)
	{
		n = l  / 2;
		for (i = n ; i < l; i++)
			_putchar(*(str + i));
	}
	else
	{
		n = (l - 1) / 2;
		for (i = n + 1; i < l; i++)
			_putchar(*(str + i));
	}


	_putchar('\n');
}
