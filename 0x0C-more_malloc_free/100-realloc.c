#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - This function create a arrays
 *
 * @old_size: string for content the arrays
 * @new_size: string s2 content the arrays
 * @ptr: xx
 * Return: pointer or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;

	array = ptr;

	if (new_size > old_size || ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (array);
}
