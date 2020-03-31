#include <fcntl.h>
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
	int fd;
	char buf[letters + 1];
	size_t num_bytes = 0, i = 0;

	if (*filename == '\0')
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	num_bytes = read(fd, buf, letters);

	close(fd);

	if (num_bytes < letters)
	{
		num_bytes += 1;
	}

	while (i < num_bytes)
	{
		putchar(buf[i]);
		i++;
	}

	return (num_bytes);
}
