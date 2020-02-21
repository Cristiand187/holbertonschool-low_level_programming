#include "holberton.h"

/**
 * _strncat - This function is concate two string
 *
 * @dest: Arrays destination the two string/arrays
 * @src: This second string/array
 * @n: It is Number the byts for copy
 * Return: Description of the returned value
 */

char *_strncat(char *dest, char *src, int n)
{
	int c1 = 0, c2 = 0, i = 0;

	while (dest[c1] != '\0')
		c1++;

	while (src[c2] != '\0')
		c2++;

	int ini = c1;

	if (c2 >= n)
		c2 = n;

	for (i = 0; i < c2; i++)
	{
		dest[ini + i] = src[i];
	}

	return (dest);
}
