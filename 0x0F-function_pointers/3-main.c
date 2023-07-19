#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 * Return:
 * 0 on successful execution
 * 98 if the number of arguments is not 4 (including the program name)
 * 99 if the operator is not one of the supported arithmetic operators
 * 100 if division or modulo by zero is attempted.
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char operator;
	int (*func)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = *(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator != '+'
			&& operator != '-'
			&& operator != '*'
			&& operator != '/'
			&& operator != '%')
		exit(99);

	if ((operator == '/' || operator == '%') && (atoi(argv[3])) == 0)
		exit(100);

	func = get_op_func(&operator);
	calc = func(num1, num2);
	printf("%d\n", calc);

	return (0);
}
