#include <stdio.h>
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest);
}

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -983;
	c = 999;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
