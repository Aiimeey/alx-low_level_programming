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
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{

		if (argv[i][0] == '-')
		{
			printf("0\n");
			return (0);
		}



		return (0);
	}
