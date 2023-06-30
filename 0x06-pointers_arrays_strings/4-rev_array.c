#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of element of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int  rev, i = 0;

	n -= 1;
	while (i <= n)
	{
		rev = a[n];
		a[n] = a[i];
		a[i] = rev;
		i++;
		n--;
	}
}
