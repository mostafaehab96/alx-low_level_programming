#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * create_file - create file with system call and write to it
 * @filename: the filename to be created
 * @text_content: the text content to be written to the file
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	written = write(fd, text_content, strlen(text_content));

	if (written < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
