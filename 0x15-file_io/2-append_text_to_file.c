#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends some text to existing file
 * @filename: the file name to be add to
 * @text_content: the text to be appended to the file
 * Return: 1 if success, 0 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int appended;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	appended = write(fd, text_content, strlen(text_content));
	if (appended < 0)
	{
		close(fd);
		return (-1);
	}

	return (1);
}
