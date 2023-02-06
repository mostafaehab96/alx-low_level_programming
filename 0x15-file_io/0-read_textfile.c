#include "main.h"

/**
 * read_textfile - reads a text file with system calls
 * @filename: the name of the file to be red
 * @letters: the number of letters we want to read
 * Return: the number of letters that was red successfully
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t red;
	ssize_t written;

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	red = read(fd, buffer, letters);
	written = write(STDOUT_FILENO, buffer, red);

	if (fd < 0 || red < 0 || written < 0)
	{
		free(buffer);
		return (0);
	}


	close(fd);


	return (written);
}
