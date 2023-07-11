#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings dynamically
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL if s1 or s2 is NULL or memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int j, i, len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';

	return (p);
}

