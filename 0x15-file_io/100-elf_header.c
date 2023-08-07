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
	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]), exit(98);

	return (1);
}
