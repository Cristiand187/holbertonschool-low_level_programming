#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - This function create a arrays
 *
 * @size: size the array
 * @c: char for content the arrays
 * Return: arrays or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
