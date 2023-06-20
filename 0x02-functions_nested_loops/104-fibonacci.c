#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int f = 1;
	unsigned long int t = 2;
	unsigned long int l = 1000000000;
	unsigned long int f1;
	unsigned long int f2;
	unsigned long int t1;
	unsigned long int t2;

	printf("%lu", f);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", t);
		t += f;
		f = t - f;
	}

	f1 = (f / l);
	f2 = (f % l);
	t1 = (t / l);
	t2 = (t % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", t1 + (t2 / l));
		printf("%lu", t2 % l);
		t1 = t1 + f1;
		f1 = t1 - f1;
		t2 = t2 + f2;
		f2 = t2 - f2;
	}
	printf("\n");
	return (0);
}
