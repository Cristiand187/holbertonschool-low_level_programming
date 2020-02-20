#include "holberton.h"

/**
 * _strcmp - This function is concate two string
 *
 * @s1: Arrays destination the two string/arrays
 * @s2: This second string/array
 *
 * returns
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
