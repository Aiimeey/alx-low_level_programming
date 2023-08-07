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
 * @buff: The buffer to free
 * @from_fd: The file descriptor to close for the source file
 * @to_fd: The file descriptor to close for the destination file
 */
void safe_close(char *buff, int from_fd, int to_fd)
{
	free(buff);
	close(to_fd);
	close(from_fd);
}
/**
 * buff_check - Check if the buffer is NULL and handle the error
 * @buff: The buffer to check
 * @from_fd: The file descriptor to close for the source file in case of error
 */
void buff_check(char *buff, int from_fd)
{
	if (buff == NULL)
	{
		close(from_fd);
		exit(-1);
	}
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
	char *buff;

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
	buff = malloc(1024);
	buff_check(buff, from_fd);
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	s_read = read(from_fd, buff, 1024);
	if (s_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		safe_close(buff, to_fd, from_fd);
		exit(98);
	}
	buff[s_read] = '\0';
	s_write = write(to_fd, buff, s_read);
	if (s_write != s_read || s_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(buff, to_fd, from_fd);
		exit(99);
	}
	free(buff);
	close_fd(to_fd, from_fd);
	return (0);
}

