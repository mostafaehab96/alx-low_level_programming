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
	char buffer[1];
	ssize_t count = 0;
	size_t i;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);


	for (i = 0; i < letters; i++)
	{
		if (read(fd, buffer, 1))
			write(STDOUT_FILENO, buffer, 1);
		else
			return (count);

		count++;
	}

	close(fd);

	return (count);
}
