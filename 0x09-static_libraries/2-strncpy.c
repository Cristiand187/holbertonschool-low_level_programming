#include "holberton.h"

/**
 * _strncpy - This function is concate two string
 *
 * @dest: Arrays destination the two string/arrays
 * @src: This second string/array
 * @n: It is Number the byts for copy
 * Return: Description of the returned value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
