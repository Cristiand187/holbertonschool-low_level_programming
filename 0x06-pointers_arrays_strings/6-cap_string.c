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

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] = a[0] - 32;
	}

	for (i = 1; a[i] != '\0'; i++)
	{
		if ((a[i - 1] == ' ' || a[i - 1] == '\n' || a[i - 1] == '\t'
		    || a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '!'
		    || a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '('
		     || a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}'
		     || a[i - 1] == '.') && (a[i] > 'a' && a[i] < 'z'))
		{
			a[i] = a[i] - 32;
		}
	}

	return (a);
}
