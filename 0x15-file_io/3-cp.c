#include "main.h"
/**
 * close_fd - Close file descriptors for both "to_fd" and "from_fd"
 * @to_fd: The file descriptor to close for the destination file
 * @from_fd: The file descriptor to close for the source file
 */
void close_fd(ssize_t from_fd, ssize_t to_fd)
{
	ssize_t  bt_close, bf_close;

	bf_close = close(from_fd);
	if (bf_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", from_fd);
		exit(100);
	}
	bt_close = close(to_fd);
	if (bt_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", to_fd);
		exit(100);
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
	ssize_t from_fd, to_fd, s_read, s_write;
	char buff[1024];

	umask(0);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from_fd);
		exit(99);
	}
	while ((s_read = read(from_fd, buff, 1024)))
	{
		if (s_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_fd(to_fd, from_fd);
			exit(98);
		}
		s_write = write(to_fd, buff, s_read);
		if (s_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(to_fd, from_fd);
			exit(99);
		}
	}
	close_fd(to_fd, from_fd);
	return (0);
}

