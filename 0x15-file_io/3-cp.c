#include "main.h"
#include <stdio.h>

/**
 * close_file - closes a file with sys call in a safe way
 * @fd: the file descriptor to be closed
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * main - copy file content to another
 * @argc: the arguments count
 * @argv: the arguments of the program
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int file_to;
	int file_from;
	char buffer[1024];
	ssize_t red;
	ssize_t written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		red = read(file_from, buffer, 1024);
		if (red == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		written = write(file_to, buffer, red);
		if (written == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (red > 0);

	close_file(file_to);
	close_file(file_from);

	return (0);
}
