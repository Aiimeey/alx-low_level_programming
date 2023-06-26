#include "main.h"
#include <stdio.h>
 /**
 * print_array -  prints n elements of an array of integers
 * @a: array name
 * @n: number of elements of the array
 */

void print_array(int *a, int n)
{
        for (n = 0; n <= 4; n++)
        {
                printf("%d", a[n]);
                if (n == 4)
                {
                        printf("\n");
                        continue;
                }
                printf(", ");
        }
}
