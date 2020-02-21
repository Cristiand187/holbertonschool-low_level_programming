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
	int c1 = 0, i = 0;

	while (dest[c1] != '\0')
		c1++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[c1 + i] = src[i];

	dest[c1 + i] = '\0';

	return (dest);
}
