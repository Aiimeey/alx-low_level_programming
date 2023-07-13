#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 *@size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		((char *)p)[i] = 0;

	return (p);
}
