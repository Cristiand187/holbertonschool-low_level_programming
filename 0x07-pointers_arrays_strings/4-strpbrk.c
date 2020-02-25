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
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0;  accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
