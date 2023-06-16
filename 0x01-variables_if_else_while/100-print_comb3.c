#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar (i + '0');
				putchar (j + '0');
				if (i == 8 && j == 9)
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}

	putchar ('\n');
	return (0);
}
