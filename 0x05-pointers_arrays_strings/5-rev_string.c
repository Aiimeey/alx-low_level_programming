#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int l = 0, i;
	char rev;

	while (*s != '\0')
	{
		s++;
		l++;
	}

	s -= l;

	for (i = 0; i < l; i++)
	{
		l--;
		rev = s[i];
		s[i] = s[l];
		s[l] = rev;

	}
	_putchar('\n');
}
