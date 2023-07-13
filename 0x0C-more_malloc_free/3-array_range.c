#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: On success a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i, k;

	if (min > max)
		return (NULL);

	k = max - min + 1;

	p = malloc(k * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		p[i] = min++;

	return (p);
}
