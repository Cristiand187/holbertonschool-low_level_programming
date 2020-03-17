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
			return (s);
		}
		s++;
	}

	while (s[van] != '\0')
		van++;

	if (s[van] == c)
		return (&s[van]);
	else
		return (NULL);
}
