#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the allocated space for ptr, in bytes
 * @new_size: New size of the memory block, in bytes
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *old_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0 ; i < new_size ; i++)
			new_ptr[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			new_ptr[i] = old_ptr[i];
	}



	free(ptr);


	return (new_ptr);
}
