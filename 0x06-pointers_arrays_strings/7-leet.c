#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: string
 * Return: n value
 */
char *leet(char *n)
{
	int i = 0, j;

	char l[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	while (n[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == l[j])
			{
				n[i] = d[j];
			}
		}

		i++;
	}

	return (n);
}
