#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: number of element
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{

		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];

	}

	printf("Sum 1: %d\n", sum1);
	printf("Sum 2: %d\n", sum2);
}
