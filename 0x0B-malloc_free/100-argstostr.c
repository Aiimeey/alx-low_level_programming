#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - Concatenates an array of strings into a single string
 * @ac: The number of arguments
 * @av: An array of strings
 *
 * Return: A pointer to the concatenated string, or NULL if an error occurred
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, a = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			p[a] = av[i][j];
			a++;
		}
		p[a] = '\n';
		a++;
	}
	p[a] = '\0';

	return (p);
}

