#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *strtow - splits a string into words.
 * @str: pointer to string
 * Return: a pointer to an array of strings, NULL otherwise
 */
char **strtow(char *str)
{
	int i = 0,  l, m,  wc = 0, j = 0, cc = 0;
	char **pw;

	while (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		wc++;
		while (str[i] != ' ' && str[i])
			i++;
		i--;
	}
	pw = (char **)malloc((wc + 1) * sizeof(char *));
	for (i = 0; i < wc; i++)
	{
		cc = 0;
		for (; str[j]; j++)
		{
			if (str[j] == ' ')
				continue;
			m = j;
			while (str[j] != ' ' && str[j])
			{
				cc++;
				j++;
			}
			pw[i] = (char *)malloc((cc + 1) * sizeof(char));
			for (l = 0; l < cc; l++, m++)
				pw[i][l] = str[m];
			pw[i][l + 1] = '\0';
			break;
		}
	}
	if (wc == 0)
		return (NULL);
	pw[wc] = NULL;
	return (pw);
}
