#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars and initializes it with a given char
 * @size: The size of the array
 * @c: The character used to initialize the array
 * Return: A pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';

	return (array);
}
