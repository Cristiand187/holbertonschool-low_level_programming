#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - This function create a arrays
 *
 * @s1: string for content the arrays
 * @s2: string s2 content the arrays
 * Return: arrays or null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;
	char *array;

	while (s1[size1] != '\0' || s1 == NULL)
		size1++;

	while (s2[size2] != '\0'  || s2 == NULL)
		size2++;


	array = malloc((size1 + size2 + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		array[i + j] = s2[j];
	}

	array[i + j] = '\0';

	return (array);
}
