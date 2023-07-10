#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string dynamically
 * @str: The string to be duplicated
 * Return: Pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or memory allocation fails
 */
char *_strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);

	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	p[i] = '\0';

	return (p);
}

