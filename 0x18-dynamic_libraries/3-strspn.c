#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - this function that fills memory with a constant byte.
 *
 * @s: Parameter bytes of the memory area pointed.
 * @accept: Parameter the constant byte.
 *
 * Return: Returns a pointer to the memory area
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;

			j++;
		}
		if (!accept[j])
			return (i);

		i++;
	}
	return (i);
}
