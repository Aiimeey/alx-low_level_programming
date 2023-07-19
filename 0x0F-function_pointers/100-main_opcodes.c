#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the opcodes of its own main function
 *@argc: the number of arg
 *@argv: an array of arg
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (argv[1][0] == '-')
	{
		printf("Error\n");
		exit(2);
	}

	num = atoi(argv[1]);
	return (0);
}
