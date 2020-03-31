#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * append_text_to_file - Write a function that appends text at the end of a
 * file
 * @filename: Name file.
 * @text_content: the number of letters it should read and print.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_bytes = 0, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0644);

	if (fd < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	len = 0;

	while (text_content[len] != '\0')
		len++;

	num_bytes = write(fd, text_content, len);

	close(fd);

	if (num_bytes < 0)
		return (-1);

	return (1);
}
