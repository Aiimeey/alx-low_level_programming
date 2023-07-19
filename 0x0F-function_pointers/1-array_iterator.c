#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as parameter
 *                  on each element of an array
 * @array: Pointer to the integer array
 * @size: Size of the array
 * @action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;	

	while (i < size)
	{
		action(array[i]);

		i++;
	}
}
