#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be print
 * Return: void
 */

void print_number(int n)
{
	unsigned int j = 1, k, r;

	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}
	k = n;

	while (k >= 10)
	{
		k = k / 10;
		j = j * 10;
	}

	k = n;
	while (j >= 1)
	{
		k = n / j;
		r = k % 10;
		_putchar (r + '0');
		j = j / 10;
	}

}
