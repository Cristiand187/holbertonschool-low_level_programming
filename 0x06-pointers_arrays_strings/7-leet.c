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
	int i = 0, j = 0;
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	int r[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	while (a[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (a[i] == l[j])
			{
				*(a + i) = r[j];
			}
			j++;
		}
		i++;
	}

return (a);
}
