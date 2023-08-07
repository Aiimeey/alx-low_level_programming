#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - Reads characters from a file and writes them to STDOUT
 * @filename: The name of the file to read
 * @letters: The number of characters to read from the file
 *
 * Return: On success, the number of characters written to STDOUT is returned
 *         On failure or error, the function returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s_write, s_read;
	char *buff;
	int fb;

	fb = open(filename, O_RDONLY);
	if (fb == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
	{
		close(fb);
		return (0);
	}

	s_read = read(fb, buff, letters);
	if (s_read == -1)
	{
		free(buff);
		close(fb);
		return (0);
	}
	buff[s_read] = '\0';
	s_write = write(STDOUT_FILENO, buff, s_read);
	if (s_write != s_read)
	{
		free(buff);
		close(fb);
		return (0);
	}
	free(buff);
	close(fb);
	return (s_write);
}

