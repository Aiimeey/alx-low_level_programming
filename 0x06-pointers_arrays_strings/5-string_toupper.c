#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: string
 * Return: n
 */
char *string_toupper(char *n)
{
	int i = 0, j;

	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			j = 122 - n[i];
			n[i] = 90 - j;
		}

		i++;
	}
	return (n);
}

