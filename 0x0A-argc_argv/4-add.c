#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j != '\n'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{

				sum += atoi(argv[i]);
			}

			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}

