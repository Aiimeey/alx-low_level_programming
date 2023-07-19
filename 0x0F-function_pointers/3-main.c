#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 * Return:
 * 0 on successful execution.
 * 98 if the number of the arguments is not 4 (including the program name)
 * 99 if the operator is not one of the supported arithmetic operators
 * 100 if division or modulo by zero is attempted
 */
int main(int argc, char *argv[])
{
	int calc = 0, num1 = 0, num2 = 0;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *(argv[2]);

	if (operator != '+'
			&& operator != '-'
			&& operator != '*'
			&& operator != '/'
			&& operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && (atoi(argv[3])) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = (get_op_func(&operator))(num1, num2);
	printf("%d\n", calc);

	return (0);
}
