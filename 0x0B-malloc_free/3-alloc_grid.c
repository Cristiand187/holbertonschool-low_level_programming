#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - This function create a arrays
 *
 * @width: string for content the arrays
 * @height: string s2 content the arrays
 * Return: arrays or null
 */

int **alloc_grid(int width, int height)
{
	int i = 0;

	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc((height + 1) * sizeof(int *));


	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc((width + 1) * sizeof(int));

		if (array[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(array[i]);

			free(array);
			return (NULL);
		}
	}

	return (array);
}
