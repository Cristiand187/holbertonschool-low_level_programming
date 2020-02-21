#include "holberton.h"

/**
 * leet - This function is concate two string
 *
 * @a: Arrays destination the two string/arrays
 *
 * Return: Description of the returned value
 */

char *leet(char *a)
{
	int i = 0, j = 0, k = 0;
	char letter[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	while (a[i] != '\0')
	{

		while (letter[j] != '\0')
		{
			if (a[i] == letter[j])
			{
				k = j;
				*(a + i) = replace[k];
			}
			j++;
		}
		i++;
	}

	return (a);
}
