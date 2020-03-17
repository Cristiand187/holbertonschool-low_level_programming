#include "holberton.h"
#include <stdio.h>

/**
 * _memset - this function that fills memory with a constant byte.
 *
 * @s: Parameter bytes of the memory area pointed.
 * @b: Parameter the constant byte.
 * @n: Parameter is number the bytes the reemplace in s
 *
 * Return: Returns a pointer to the memory area
 *
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n && s[i] != '\n'; i++)
	{
		s[i] = b;
	}
	return (s);
}
