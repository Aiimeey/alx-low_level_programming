#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{

	int k = 0, i, j, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j != 0)
				{
					_putchar (' ');
				}
				_putchar (k + '0');
			}
			else
			{
				a = k / 10;
				b = k % 10;
				_putchar (a + '0');
				_putchar (b + '0');

			}
			if (j != 9)
			{
			_putchar (',');
			_putchar (' ');
			}
		}

		_putchar ('\n');
	}
}
