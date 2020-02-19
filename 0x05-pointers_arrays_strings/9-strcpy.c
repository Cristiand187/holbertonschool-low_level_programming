#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _strcpy - xxx
 *
 * @dest: this is des
 * @src: zz
 * Return: Description of the returned value
 */


char *_strcpy(char *dest, char *src)
{

	int i = 0, n = 0;

	while (src[n] != '\0')
		n++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i + 1] = '\0';

	return (dest);

}
