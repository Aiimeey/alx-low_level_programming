#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to the integer array
 * @size: Size of the array
 * @cmp: Function pointer to the comparison function
 * Return: The index if the element found, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);

		i++;
	}
	return (-1);

}
