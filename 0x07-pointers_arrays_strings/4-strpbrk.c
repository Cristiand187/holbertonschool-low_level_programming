#include "holberton.h"

/**
 * _strpbrk - this function that fills memory with a constant byte.
 *
 * @s: Parameter bytes of the memory area pointed.
 * @accept: Parameter the constant byte.
 *
 * Return: Returns a pointer to the memory area
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int van = 0, j = 0;

	while (*s)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				van = 1;
				break;
			}
			j++;
		}
		if (van == 1)
			break;
		s++;
	}

	if (van == 1)
		return (s);
	else
		return (NULL);
}
