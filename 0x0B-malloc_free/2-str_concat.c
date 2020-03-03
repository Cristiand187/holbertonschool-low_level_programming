#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - This function create a arrays
 *
 * @str: string for content the arrays
 * Return: arrays or null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1 = 0, size2 = 0, j = 0;

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	char *array = malloc((size1 + size2 + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; i < size2; j++)
	{
		array[i + j] = s2[j];
	}

	return (array);
}
