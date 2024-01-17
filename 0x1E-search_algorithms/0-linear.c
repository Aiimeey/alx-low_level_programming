#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 *                 using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 if not present or if array is NULL,
 *          otherwise return value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i,  array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
