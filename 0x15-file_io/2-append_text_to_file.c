#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * append_text_to_file - Appends text to a specified file
 * @filename: The name of the file to which the text will be appended
 * @text_content: The text to be appended to the file
 *
 * Return: On success, 1 is returned. On failure, -1 is returned.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t s_print;
	int fd, f_close;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		s_print = dprintf(fd, "%s\n", text_content);
		close(fd);

		if (s_print == -1)
			return (-1);
	}

	f_close = close(fd);
	if (f_close == 1)
		return (-1);

	return (1);
}
