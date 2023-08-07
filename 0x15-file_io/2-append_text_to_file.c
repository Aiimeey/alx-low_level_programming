#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t s_print;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);


	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		s_print = dprintf(fd, "%s\n", text_content);
		close(fd);


		if (s_print < 0)
			return (-1);

	}

	return (1);
}

