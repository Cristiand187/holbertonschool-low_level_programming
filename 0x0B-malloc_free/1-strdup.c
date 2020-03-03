#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - This function create a arrays
 *
 * @str: string for content the arrays
 * Return: arrays or null
 */

char *_strdup(char *str)
{
	unsigned int i, size = 0;

	while (str[size] != '\0')
		size++;

	char *array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
