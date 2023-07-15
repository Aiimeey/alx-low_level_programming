#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of command-line arguments passed to the program
 * @argv: array of strings that holds the command-line arguments
 *
 * Return: The product of num1 and num2
 */


int main(int argc, char* argv[])
{
	int  num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[1] < 48 && *argv[1] > 57)
	{	printf("Error\n");
		exit(98);
	}

	if (*argv[2] < 48 && *argv[2] > 57)
	{		printf("Error\n");
		exit(98);
	}	

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d",mul);
	return (0);
}
