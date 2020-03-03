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
	unsigned int i = 0, size = 0;
	char *array;

	while (str[size] != '\0')
		size++;

	array = malloc((size + 1)  * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		array[i] = str[i];
	}

	return (array);
	free(array);
}
