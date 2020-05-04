#include "holberton.h"

/**
 * _memcpy - this function that fills memory with a constant byte.
 *
 * @dest: Parameter bytes of the memory area pointed.
 * @src: Parameter the constant byte.
 * @n: Parameter is number the bytes the reemplace in s
 *
 * Return: Returns a pointer to the memory area
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
