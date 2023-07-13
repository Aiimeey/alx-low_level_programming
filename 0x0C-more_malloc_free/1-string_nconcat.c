#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the allocated concatenated string,
 *         or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int  i, len1 = 0;
	unsigned int j,len2 = 0;
	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
	{
		p = malloc((len1 + len2 + 1) * sizeof(char));
		if (p == NULL)
			return (NULL);

		for (i = 0; i < len1; i++)
			p[i] = s1[i];

		for (j = 0; j < len2; j++, i++)
			p[i] = s2[j];
	}
	else
	{
		p = malloc((len1 + n + 1) * sizeof(char));
		if (p == NULL)
			return (NULL);

		for (i = 0; i < len1; i++)
			p[i] = s1[i];

		for (j = 0; j < n; j++, i++)
			p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}

