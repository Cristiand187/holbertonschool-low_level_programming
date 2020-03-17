#include "holberton.h"

/**
 * string_toupper - This function is concate two string
 *
 * @a: Arrays destination the two string/arrays
 * Return: Description of the returned value
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;

		i++;
	}

	return (a);
}
