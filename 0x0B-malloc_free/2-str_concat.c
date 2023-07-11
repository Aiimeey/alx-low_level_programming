#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings dynamically
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the allocated concatenated string,
 *         or NULL if s1 or s2 is NULL or memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int j, i, len1, len2;

	if (s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	p = malloc((len1 + len2) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
