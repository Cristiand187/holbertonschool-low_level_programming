#include "holberton.h"

/**
 * rot13 - This function is concate two string
 *
 * @a: Arrays destination the two string/arrays
 *
 * Return: Description of the returned value
 */

char *rot13(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if ((a[i] >= 'a' && a[i] <= 'm') || (a[i] >= 'A' && a[i] <= 'M'))
		{
			a[i] = (a[i] + 13);
		}
		else
			while ((a[i] >= 'n' && a[i] <= 'z') ||
			      (a[i] >= 'N' && a[i] <= 'Z'))
			{
				a[i] = (a[i] - 13);
			}
		i++;
	}
	return (a);
}
