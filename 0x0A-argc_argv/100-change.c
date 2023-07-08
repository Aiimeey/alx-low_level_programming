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
	int c = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	if (num >= 25)
	{
		c = num / 25;
		num = num % 25;
	}
	if (num >= 10)
	{
		c += num / 10;
		num = num % 10;
	}
	if (num >= 5)
	{
		c += num / 5;
		num = num % 5;
	}
	if (num >= 2)
	{
		c += num / 2;
		num = num % 2;
	}
	if (num ==  1)
		c++;
	printf("%d\n", c);
	return (0);
}
