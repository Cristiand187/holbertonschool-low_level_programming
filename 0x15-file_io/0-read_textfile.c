#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * read_textfile - function that reads a
 * text file and prints it to the POSIX standard output.
 * @filename: Name file.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i = 0;
	char *buf;
	size_t num_bytes = 0;

	if (*filename == '\0')
	{
		return (0);
	}

	fd = open(filename, O_RDONLY, 0644);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	num_bytes = read(fd, buf, letters);

	if (num_bytes < letters)
	{
		num_bytes += 1;
	}

	write(STDOUT_FILENO, buf, num_bytes);

	close(fd);

	if (i == -1)
		return (0);

	return (num_bytes);
}
