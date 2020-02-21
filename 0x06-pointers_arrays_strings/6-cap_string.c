#include "holberton.h"

/**
 * cap_string - This function is concate two string
 *
 * @a: Arrays destination the two string/arrays
 *
 * Return: Description of the returned value
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (((a[i] >= 'a' && a[i] <= 'z')))
		{
			if (a[i - 1] == ' ' || a[i - 1] == '\n')
			a[i] = a[i] - 32;
		}
		i++;
	}

	return (a);
}
