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

	array = malloc((width + 1) * sizeof(int *));


	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc((width + 1) * sizeof(int));

		if (array[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(array[j]);

			free(array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
