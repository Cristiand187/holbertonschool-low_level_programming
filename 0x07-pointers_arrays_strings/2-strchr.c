#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - this function that fills memory with a constant byte.
 *
 * @s: Parameter bytes of the memory area pointed.
 * @c: Parameter the constant byte.
 *
 * Return: Returns a pointer to the memory area
 *
 */

char *_strchr(char *s, char c)
{
	int van = 0;

	while (*s)
	{
		if (*s == c)
		{
			van = 1;
			break;
		}
		s++;
	}

	if (van == 1)
		return (s);
	else
		return (NULL);
}
