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
	int i = 0, j = 0;

	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(width * sizeof(int *));


	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));

		if (array[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(array[j]);
			free(array);
			return (NULL);
		}

		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
