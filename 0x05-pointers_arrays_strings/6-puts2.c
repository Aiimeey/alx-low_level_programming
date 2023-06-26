#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	int l = 0, i;

	while (*str != '\0')
	{
		str++;
		l++;
	}

	str = str - l;

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
