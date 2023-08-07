#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
/**
 * close_fd - Close file descriptors for both "to_fd" and "from_fd"
 * @to_fd: The file descriptor to close for the destination file
 * @from_fd: The file descriptor to close for the source file
 */
void close_fd(int to_fd, int from_fd)
{
	int  bt_close, bf_close;

	bt_close = close(to_fd);
	bf_close = close(from_fd);
	if (bt_close < 0 || bf_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
}
/**
 * safe_close - Safely close file descriptors and free memory
 * @from_fd: The file descriptor to close for the source file
 * @to_fd: The file descriptor to close for the destination file
 */
void safe_close(int from_fd, int to_fd)
{
	close(to_fd);
	close(from_fd);
}

/**
 * main - The main function to copy data from one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: The function returns 0 on successful execution.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, s_read, s_write;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp from_fd to_fd\n");
		exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((s_read = read(from_fd, buff, 1024)))
	{
		if (s_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safe_close(to_fd, from_fd);
			exit(98);
		}
		buff[1024] = '\0';
		s_write = write(to_fd, buff, s_read);
		if (s_write != s_read || s_write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(to_fd, from_fd);
			exit(99);
		}
	}

	close_fd(to_fd, from_fd);
	return (0);
}
