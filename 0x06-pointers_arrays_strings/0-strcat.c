#include "holberton.h"

/**
 * _strcat - This function is concate two string
 *
 * @dest: Arrays destination the two string/arrays
 * @src: This second string/array
 *
 * returns
 */

char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2 = 0, i = 0;

	while (dest[c1] != '\0')
		c1++;

	while (src[c2] != '\0')
		c2++;

	int ini = c1;

	for (i = 0; i < c2; i++)
	{
		dest[ini + i] = src[i];
	}

	char *p = dest;

	return (p);
}
