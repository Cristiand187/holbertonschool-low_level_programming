#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - This function create a arrays
 *
 * @min: string for content the arrays
 * @max: string s2 content the arrays
 * Return: pointer or null
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		array[i] = min + i;

	return (array);
}
