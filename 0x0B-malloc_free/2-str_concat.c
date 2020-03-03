#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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

	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
			size1++;
	}
	else
		size1 = 1;

	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
			size2++;
	}
	else
		size2 = 1;


	while (s1[size1] != '\0')
		size1++;

	array = malloc((size1 + size2 + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; j <= size2; j++)
	{
		array[i + j] = s2[j];
	}

	array[i + j] = '\0';

	return (array);
}
