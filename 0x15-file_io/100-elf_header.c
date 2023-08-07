#include <stdio.h>
/**
 * main - entry point
 * @argc: count of arguments present in CLI
 * @argv: pointer to array of pointers
 *
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
