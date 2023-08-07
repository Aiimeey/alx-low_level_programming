#include "main.h"
#include <fcntl.h>
#include <stdio.h>
/**
 * create_file - Creates a new file and writes content to it
 *				 or overwrites it if already exists
 * @filename: The name of the file to create or overwrite.
 * @text_content: The content to be written to the file.
 *
 * Return: On success, the function returns 1.
 *         On failure, the function returns -1.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t s_print;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		s_print = dprintf(fd, "%s", text_content);

		if (s_print < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
